#include <iostream>
#include "Zadanie_1/integrate.hpp"
#include "Zadanie_2/expr_templates.hpp"
#include "Zadanie_3/add_expr.hpp"
#include "Zadanie_4/div_expr.hpp"
#include "Zadanie_4/sin_expr.hpp"
#include "Zadanie_5/expr_templates_T.hpp"
#include "Zadanie_6/expr_templates_2D.hpp"

using namespace std;

int main(){
    cout << "===============ZADANIE_1===============" << endl << endl;

    cout << "The integral of sina(0) over the interval [0, pi] with a step size of 0.01: ";
    cout << integrate(sina(0), 0, 3.1415926, 0.01) << endl;
    cout << "The integral of sina(1) over the interval [0, pi] with a step size of 0.01: ";
    cout << integrate(sina(1), 0, 3.1415926, 0.01) << endl;
    cout << "The integral of sina(2) over the interval [0, pi] with a step size of 0.01: ";
    cout << integrate(sina(2), 0, 3.1415926, 0.01) << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    Variable x;

    cout << "The integral of x over the interval [0, 1] with a step size of 0.001: ";
    cout << integrate(x, 0, 1, 0.001) << endl;
    cout << "The integral of Constant(1.0) over the interval [0, 1] with a step size of 0.001: ";
    cout << integrate(Constant(1.0), 0, 1, 0.001) << endl << endl;

    cout << "===============ZADANIE_3===============" << endl << endl;

    cout << "The integral of x + 1 over the interval [0, 1] with a step size of 0.001: ";
    cout << integrate(x + 1.0, 0, 1, 0.001) << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    cout << "The integral of 1.0/sin(x + 1.0) over the interval [0, 1] with a step size of 0.001: ";
    cout << integrate(1.0/sin(x + 1.0), 0, 1, 0.001) << endl << endl;

    cout << "===============ZADANIE_5===============" << endl << endl;

    Expr<int> i;
    cout << "The integral of i + 2 over the interval [0, 5] with a step size of 1: ";
    cout << integrate(i + 2, 0, 5, 1) << endl; 

    Expr<float> p;
    cout << "The integral of p + 1.5 over the interval [0, 1] with a step size of 0.001: ";
    cout << integrate(p + 1.5f, 0, 1, 0.001) << endl << endl;

    cout << "===============ZADANIE_6===============" << endl << endl;

    First x_2d;
    Second y_2d;
    cout << "The 2D integral of x_2d + y_2d over x in [0, 1] and y in [0, 1] with step 0.001: ";
    cout << integrate2D(x_2d + y_2d, 0, 1, 0.001, 0, 1, 0.001) << endl << endl;

    return 0;
}