#include <iostream>
#include "Zadanie_1/gcd.hpp"
#include "Zadanie_2/three_way_comparable.hpp"
#include "Zadanie_3/my_vector.hpp"
#include "Zadanie_4/concept_overload.hpp"
#include "Zadanie_5/concept_specialization.hpp"

using namespace std;

int main() {
    cout << "=============== ZADANIE 1 ===============" << endl << endl;
    cout << "gcd(100, 10) = " << gcd(100, 10) << endl;
    // cout << gcd(10.5, 2.0); // double nie jest std::integral
    cout << endl;

    cout << "=============== ZADANIE 2 ===============" << endl << endl;
    compare_objects(10, 20);

    Number n1{5};
    Number n2{5};
    compare_objects(n1, n2);
    cout << endl;

    cout << "=============== ZADANIE 3 ===============" << endl << endl;
    MyVector<int> my_vec;
    my_vec.push_back(10);
    cout << "Pushed '10' to MyVector<int>" << endl;
    cout << "Current size: " << my_vec.size() << endl;

    NonCopyable non_copy_obj;
    MyVector<NonCopyable> no_copy_vec;
    
    //no_copy_vec.push_back(non_copy_obj);
    cout << endl;

    cout << "=============== ZADANIE 4 ===============" << endl << endl;
    process_data(3.1415);   
    process_data(1024);     
    process_data(2026L);    
    cout << endl << endl;

    cout << "=============== ZADANIE 5 ===============" << endl << endl;
    //analyze_type(3.14);
    analyze_type(2026L);
    analyze_type(10);

    cout << endl;

    return 0;
}