#include <iostream>
#include <cmath>
#include "Zadanie_1/silnia.hpp"
#include "Zadanie_2/pow.hpp"
#include "Zadanie_3/pow_2.hpp"
#include "Zadanie_4/sinus.hpp"
#include "Zadanie_5/inner.hpp"
#include "Zadanie_6/dot.hpp"

using namespace std;

int main(){
    cout << "===============ZADANIE_1===============" << endl << endl;

    cout << "6! = " << silnia<6>() << endl;
    cout << "5! = " << silnia<5>() << endl;
    cout << "0! = " << silnia<0>() << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    cout << "2^3 = " << Pow<2, 3>::val << endl;
    cout << "4^1 = " << Pow<4, 1>::val << endl;
    cout << "4^0 = " << Pow<4, 0>::val << endl;
    cout << "0^3 = " << Pow<0, 3>::val << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;

    cout << "2^3 = " << pow_2<3>(2) << endl;
    cout << "4^1 = " << pow_2<1>(4) << endl;
    cout << "4^0 = " << pow_2<0>(4) << endl;
    cout << "1.44^4 = " << pow_2<4>(1.44) << endl;
    cout << "0^3 = " << pow_2<3>(0) << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    cout << "Sine approximation using 2 terms" << endl;
    cout << "sin(0) = " << sinus<2>(0) << endl;
    cout << "sin(30 degrees) = " << sinus<2>(M_PI/6.0) << endl;
    cout << "sin(45 degrees) = " << sinus<2>(M_PI/4.0) << endl;
    cout << "sin(60 degrees) = " << sinus<2>(M_PI/3.0) << endl;
    cout << "sin(90 degrees) = " << sinus<2>(M_PI/2.0) << endl << endl;

    cout << "Sine approximation using 8 terms" << endl;
    cout << "sin(0) = " << sinus<8>(0) << endl;
    cout << "sin(45 degrees) = " << sinus<8>(M_PI/4.0) << endl;
    cout << "sin(90 degrees) = " << sinus<8>(M_PI/2.0) << endl;
    cout << "sin(135 degrees) = " << sinus<8>(M_PI/2.0 + M_PI/4.0) << endl;
    cout << "sin(180 degrees) = " << sinus<8>(M_PI) << endl << endl;

    cout << "===============ZADANIE_5===============" << endl << endl;

    double vec[4] = {1.1, 2.2, 3.3, 4.4};

    double vec2[3] = {-1.24, 0, 0};
    double vec3[3] = {0, 5.1234, -17.0};

    double vec4[5] = {1.1, 1.1, 1.1, 1.1, 1};

    cout << "The dot product of the vectors 'vec' and 'vec' is: " << inner<4>(vec, vec) << endl;
    cout << "The dot product of the vectors 'vec2' and 'vec3' is: " << inner<3>(vec2, vec3) << endl;
    cout << "The dot product of the vectors 'vec4' and 'vec4' is: " << inner<5>(vec4, vec4) << endl;
    cout << "Boundary case in dot product: " << inner<0>(vec2, vec3) << endl << endl;

    cout << "===============ZADANIE_6===============" << endl << endl;

    float vector[3] = {-5.1f, 1.11f, 0.0f};
    float vector2[3] = {-5.22f, 1.0f, 15.145f};

    double vector3[2] = {1.2345, 1.2345};
    double vector4[2] = {1.1, 2.2};

    int vector5[2] = {1, 2};
    int vector6[2] = {3, 4};

    cout << "The dot product of the vectors 'vec' and 'vec' is: " << dot<4>(vec, vec) << endl;
    cout << "The dot product of the vectors 'vec2' and 'vec3' is: " << dot<3>(vec2, vec3) << endl;
    cout << "The dot product of the vectors 'vec4' and 'vec4' is: " << dot<5>(vec4, vec4) << endl;
    cout << "The dot product of the vectors 'vector' and 'vector2' is: " << dot<3>(vector, vector2) << endl;
    cout << "The dot product of the vectors 'vector3' and 'vector4' is: " << dot<2>(vector3, vector4) << endl;
    cout << "The dot product of the vectors 'vector5' and 'vector6' is: " << dot<2>(vector5, vector6) << endl;
    cout << "Boundary case in dot product for int: " << dot<0>(vector5, vector6) << endl;
    cout << "Boundary case in dot product for double: " << dot<0>(vector3, vector4) << endl << endl;

    return 0;
}