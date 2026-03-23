#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include "Zadanie_1/max.hpp"
#include "Zadanie_2/convert.hpp"
#include "Zadanie_3/stack.hpp"
#include "Zadanie_4/stack_2.hpp"

using namespace std;

int main() {
    cout << "===============ZADANIE_1===============" << endl << endl;

    int a = 5, b = 10;
    cout << "MAX value for int arguments(5 and 10): " << ::max(a, b) << endl;

    double x = 3.14, y = 9.81;
    cout << "MAX value for arguments that are pointers(3.14 and 9.81): " << *max(&x, &y) << endl;

    int tab[6] = {4, 8, 15, 16, 23, 42};
    cout << "MAX value in the array [4, 8, 15, 16, 23, 42]: " << max(tab, 6) << endl;

    char name[] = "Johnny";
    char surname[] = "Depp";
    cout << "The word furthest along the alphabet for modifiable arguments ('Johnny' and 'Depp'): ";
    cout << max(name, surname) << endl;

    cout << "The word furthest along the alphabet for unmodifiable arguments ('Johnny' and 'Depp'): ";
    cout << max("Johnny", "Depp") << endl;

    char word[] = "Johnny";
    cout << "The word furthest along the alphabet for mixed arguments ('Johnny' and 'Depp'): ";
    cout << max(word, "Depp") << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    double number_e = 2.7182;

    cout << "The Euler number, as an argument of a function that returns a double, is: ";
    cout << convert<double>(number_e) << endl;
    cout << "The Euler number, as an argument of a function that returns a int, is: ";
    cout << convert<int>(number_e) << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;

    cout << "Creating Stack<int, 50>" << endl;
    Stack<int, 50> test1;
    cout << endl << endl;

    cout << "Creating Stack<int, 666>" << endl;
    Stack<int, 666> test2;
    cout << endl << endl;

    cout << "Creating Stack<char*, 10>" << endl;
    Stack<char*, 10> test3;
    cout << endl << endl;

    cout << "Creating Stack<double, 99>" << endl;
    Stack<double, 99> test4;
    cout << endl << endl;

    cout << "Creating Stack<int*, 77>" << endl;
    Stack<int*, 77> test5; 
    cout << endl << endl;

    cout << "Creating Stack<double, 666>" << endl;
    Stack<double, 666> test6; 
    cout << endl << endl;

    cout << "Creating Stack<double*, 44>" << endl;
    Stack<double*, 44> test7; 
    cout << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    Stack_2<int, 100> s_default;

    s_default.push(80);
    s_default.push(67);
    s_default.push(-20);

    cout << "After performing the pop() operation on a stack containing the elements 80, 67, and -20," << endl;
    cout << "the following element will be removed: " << s_default.pop() << endl << endl;

    Stack_2<int, 0, vector<int> > s_container;

    s_container.push(80);
    s_container.push(67);
    s_container.push(-20);

    cout << "After performing the pop() operation on a stack containing the elements 80, 67, and -20," << endl;
    cout << "the following element will be removed: " << s_container.pop() << endl << endl;

    cout << "===============ZADANIE_5===============" << endl << endl;

    set<int, greater<int>> reverse_set;

    reverse_set.insert(40);
    reverse_set.insert(-224);
    reverse_set.insert(-80);
    reverse_set.insert(88);
    reverse_set.insert(15);
    reverse_set.insert(-7);
    reverse_set.insert(0);

    cout << "The contents of the 'reverse_set' set: ";

    for(int x : reverse_set){
        cout << x << " ";
    }

    return 0;
}