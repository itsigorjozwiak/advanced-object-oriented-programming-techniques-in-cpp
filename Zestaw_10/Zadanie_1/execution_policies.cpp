#include <iostream>
#include <execution>
#include <vector>
#include <algorithm>

/*
=================== EXECUTION POLICIES ===================
                    (POLITYKI WYKONANIA)
Od C++17 standardowe algorytmy biblioteki STL (np. std::sort, std::transform)
mogą przyjmować politykę wykonania, jako pierwszy argument. Pozwala to na bardzo
proste zrównoleglenie obliczeń na wielu rdzeniach procesora lub wektoryzację
sprzętową (SIMD), bez konieczności ręcznego tworzenia wątków. Należy pamiętać,
że to narzędzie nie rozwiązuje magicznie wszystkich problemów i to programista
musi zadbać, aby zrównoleglone operacje były od siebie niezależne i nie powodowały
wyścigów danych.
*/

using namespace std;

int main(){
    vector<int> data(50'000, 2);
    vector<int> data2(50'000, 2);
    vector<int> data3(50'000, 2);

    /*
    std::execution::sequenced_policy

    Wymusza standardowe, sekwencyjne wykonanie algorytmu w jednym wątku.
    Używana głównie w kodzie generycznym lub gdy zrównoleglenie jest niemożliwe.
    */

    for_each(execution::seq, data.begin(), data.end(),
        [](int& x){
            x = x*x*x;
        }
    );

    cout << "The first element of the 'data' vector after seq: " << data.front() << endl;
    cout << "The last element of the 'data' vector after seq: " << data.back() << endl;
    cout << endl;

    /*
    std::execution::parallel_policy 

    Zezwala kompilatorowi na wykonanie algorytmu równolegle, na wielu wątkach.
    Idealne do ciężkich, niezależnych od siebie obliczeń.
    */

    for_each(execution::par, data2.begin(), data2.end(),
        [](int& x){
            x = x*x*x;
        }
    );

    cout << "The first element of the 'data2' vector after par: " << data2.front() << endl;
    cout << "The last element of the 'data2' vector after par: " << data2.back() << endl;
    cout << endl;

    /*
    std::execution::parallel_unsequenced_policy

    Zezwala na wykonanie równoległe (wiele wątków) ORAZ wektoryzację (SIMD).
    Dzięki SIMD procesor może np. przetworzyć 4 liczby w jednym takcie zegara.
        -> Najszybsza, ale najbardziej restrykcyjna opcja.
        -> Wewnątrz operacji NIE WOLNO używać mutexów, pisać po ekranie ani alokować pamięci.
        -> Operacje nie mogą na siebie czekać, służy wyłącznie do czystej matematyki.
    */

    for_each(execution::par_unseq, data3.begin(), data3.end(),
        [](int& x){
            x = x*x*x;
        }
    );

    cout << "The first element of the 'data3' vector after par_unseq: " << data3.front() << endl;
    cout << "The last element of the 'data3' vector after par_unseq: " << data3.back() << endl;
    cout << endl;


    return 0;
}