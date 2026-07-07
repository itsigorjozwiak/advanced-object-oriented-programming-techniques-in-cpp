#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <mutex>
#include <numeric>
#include <chrono>

using namespace std;

int main()
{
    vector<int> vec(10'000'000);
    iota(vec.begin(), vec.end(), 0);

    vector<int> output_seq;
    auto start_seq = chrono::high_resolution_clock::now();

    for_each(execution::seq, vec.begin(), vec.end(),
        [&output_seq](int& elem){
            if (elem % 2 == 0)
            {
                output_seq.push_back(elem);
            }
        }
    );

    auto end_seq = chrono::high_resolution_clock::now();
    chrono::duration<double> time_seq = end_seq - start_seq;

    cout << "Single-threaded execution time: " << time_seq.count() << " s" << endl;

    vector<int> output_par;
    auto start_par = chrono::high_resolution_clock::now();

    mutex mtx;

    for_each(execution::par, vec.begin(), vec.end(),
        [&output_par, &mtx](int& elem){
            if (elem % 2 == 0)
            {
                lock_guard<mutex> lock(mtx);
                output_par.push_back(elem);
            }
        }
    );

    auto end_par = chrono::high_resolution_clock::now();
    chrono::duration<double> time_par = end_par - start_par;

    cout << "Multithreaded execution time: " << time_par.count() << " s" << endl;

    return 0;
}