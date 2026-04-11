#include <iostream>
#include <vector>
#include <list>
#include "Zadanie_1/sum.hpp"
#include "Zadanie_2/total.hpp"
#include "Zadanie_3/sum_char.hpp"
#include "Zadanie_4/iterator_traits.hpp"

using namespace std;

int main(){
    cout << "===============ZADANIE_1===============" << endl << endl;

    char tab1[4] = {'a', 'b', 'c', 'd'};
    cout << "Sum of characters in the tab1 character array: " << sum(tab1, &tab1[4]) << endl << endl;

    int tab2[4] = {1, 2, 3, 4};
    cout << "Sum of numbers in the tab2 array: " << sum(tab2, &tab2[4]) << endl << endl;

    float tab3[4] = {1.1f, 2.2f, 3.3f, 4.4f};
    cout << "Sum of numbers in the tab3 array: " << sum(tab3, &tab3[4]) << endl << endl;

    double tab4[4] = {1.1744, 2.275, 3.3012, 4.4457};
    cout << "Sum of numbers in the tab4 array: " << sum(tab4, &tab4[4]) << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    cout << "Sum of characters in the tab1 character array: " << sum2(tab1, &tab1[4]) << endl << endl;
    cout << "Sum of numbers in the tab2 array: " << sum2(tab2, &tab2[4]) << endl << endl;
    cout << "Sum of numbers in the tab3 array: " << sum2(tab3, &tab3[4]) << endl << endl;
    cout << "Sum of numbers in the tab4 array: " << sum2(tab4, &tab4[4]) << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;

    cout << "Sum of characters in the character array tab1 (result stored in an integer variable): ";
    cout << sum3(tab1, &tab1[4]) << endl << endl;
    cout << "Sum of characters in the character array tab1 (result stored in a char variable): ";
    cout << (int)sum3<sum_char>(tab1, &tab1[4]) << endl << endl;
    cout << "Sum of numbers in the tab2 array: " << sum3(tab2, &tab2[4]) << endl << endl;
    cout << "Sum of numbers in the tab3 array: " << sum3(tab3, &tab3[4]) << endl << endl;
    cout << "Sum of numbers in the tab4 array: " << sum3(tab4, &tab4[4]) << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    cout << "Sum of numbers in the tab2 array (using pointers as iterators): ";
    cout << sum4(tab2, &tab2[4]) << endl << endl;

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "The sum of the elements in vec is: ";
    cout << sum4(vec.begin(), vec.end()) << endl << endl;

    list<double> lst;
    lst.push_back(1.5);
    lst.push_back(2.5);
    lst.push_back(3.5);
    cout << "The sum of the elements in lst is: ";
    cout << sum4(lst.begin(), lst.end()) << endl << endl;

    return 0;
}