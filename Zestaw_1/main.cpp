#include <iostream>
#include <iomanip>
#include "Zadanie_1/maksimum.hpp"
#include "Zadanie_2/convert.hpp"
#include "Zadanie_3/dot_product.hpp"
#include "Zadanie_4/deduce.hpp"
#include "Zadanie_5/stack.hpp"

using namespace std;

int main(){
    cout << "===============ZADANIE_1===============" << endl << endl;
    cout << "The larger number of -12 and 40 is: " << maksimum(-12, 40) << endl;
    cout << "The larger number of 12.0 and 33.66 is: " << maksimum(12.0, 33.66) << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;
    cout << fixed << setprecision(5);
    cout << "Converting int(11) to double: " << convert<double>(11) << endl;
    cout.unsetf(ios_base::fixed);
    cout << "Converting double(67.1236) to int: " << convert<int>(67.1236) << endl;
    cout << "Converting double(67.1236) to int: " << convert<int, double>(67.1236) << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};

    cout << "The scalar product of vectors a and b is: " << dot_product<5>(a, b) << endl;

    double c[3] = {1.11, 5.67, 5.555555};
    double d[3] = {17.17, -1.1, 13.31};

    cout << "The scalar product of vectors c and d is: " << dot_product<3>(c, d) << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;
    SomeClass<1> c1;
    SomeClass<2> c2;

    cout << "The result of calling the function f(c1) is: ";
    f(c1);
    cout << "The result of calling the function f(c2) is: ";
    f(c2);
    cout << endl << endl;

    cout << "===============ZADANIE_5===============" << endl << endl;

    Stack<int> st;
    st.push(15);
    st.push(13);
    st.push(27);
    st.push(7);
    st.push(-1);

    cout << "The sum of all elements in the stack st is: " << f(st) << endl << endl;

    return 0;
}