#include <iostream>
#include <vector>
#include "Zadanie_1/is_class.hpp"
#include "Zadanie_2/has_value_type.hpp"
#include "Zadanie_3/is_convertible.hpp"
#include "Zadanie_4/strip.hpp"

using namespace std;

class MyClass {};
class MyClassWithValueType {
public:
    typedef double value_type;
};
struct MyStruct {};

int main(){
    cout << "===============ZADANIE_1===============" << endl << endl;

    cout << "Is 'int' a class?" << endl;
    cout << (::is_class<int>::yes ? "Yes" : "No") << endl;

    cout << "Is 'double' a class?" << endl;
    cout << (::is_class<double>::yes ? "Yes" : "No") << endl;

    cout << "Is 'MyClass' a class?" << endl;
    cout << (::is_class<MyClass>::yes ? "Yes" : "No") << endl;

    cout << "Is 'MyStruct' a class?" << endl;
    cout << (::is_class<MyStruct>::yes ? "Yes" : "No") << endl;

    cout << "Is 'vector<int>' a class?" << endl;
    cout << (::is_class< vector<int> >::yes ? "Yes" : "No") << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    cout << "Does 'vector<int>' have a value_type?" << endl;
    cout << (has_value_type< vector<int> >::yes ? "Yes" : "No") << endl;

    cout << "Does 'int' have a value_type?" << endl;
    cout << (has_value_type<int>::yes ? "Yes" : "No") << endl;

    cout << "Does 'MyClass' have a value_type?" << endl;
    cout << (has_value_type<MyClass>::yes ? "Yes" : "No") << endl;

    cout << "Does 'MyClassWithValueType' have a value_type?" << endl;
    cout << (has_value_type<MyClassWithValueType>::yes ? "Yes" : "No") << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;

    cout << "Is it possible to cast an `int` type to a `double` type?" << endl;
    cout << (Is_convertible<int, double>::yes ? "Yes" : "No") << endl;

    cout << "Is it possible to cast a `double` type to an `int` type?" << endl;
    cout << (Is_convertible<double, int>::yes ? "Yes" : "No") << endl;

    cout << "Is it possible to cast an `int` type to an `int` type?" << endl;
    cout << (Is_convertible<int, int>::yes ? "Yes" : "No") << endl;
    cout << (Is_convertible<int, int>::same_type ? "Yes" : "No") << endl;

    cout << "Is it possible to cast a `vector<int>` to an `int`?" << endl;
    cout << (Is_convertible<vector<int>, int>::yes ? "Yes" : "No") << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    cout << "Strip<const int> -> base_t" << endl;
    Strip<const int>::base_t a = 5;
    a = 99;
    cout << "The expected value of 'a' is 99: " << a << endl << endl;

    cout << "Strip<int&> -> base_t" << endl;
    int x = 10;
    Strip<int&>::base_t b = x;
    cout << "The expected value of 'b' is 10:  " << b << endl;
    x = 100;
    cout << "After the operation 'x = 100', 'b' remains unchanged: " << b << endl << endl;

    cout << "Strip<const int&> -> base_t" << endl;
    const int y = 20;
    Strip<const int&>::base_t c = y;
    c = 77;
    cout << "The expected value of 'c' is 77:  " << c << endl << endl;

    return 0;
}