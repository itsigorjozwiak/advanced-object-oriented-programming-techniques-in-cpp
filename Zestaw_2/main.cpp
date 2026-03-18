#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include "Zadanie_2/draw_template.hpp"
#include "Zadanie_2/drawable.hpp"
#include "Zadanie_2/line.hpp"
#include "Zadanie_2/circle.hpp"
#include "Zadanie_2/shape.hpp"
#include "Zadanie_3/accumulate.hpp"
#include "Zadanie_4/sequence_gen.hpp"

using namespace std;

int main() {
    cout << "===============ZADANIE_2===============" << endl << endl;
    cout << "POLIMORFIZM STATYCZNY" << endl;

    Drawable tab[2] = { Drawable(), Drawable() };
    Line tab2[3] = {Line(10), Line(5), Line(3)};


    draw_template(tab, 2);
    draw_template(tab2, 3);
    cout << endl;

    cout << "POLIMORFIZM DYNAMICZNY" << endl;

    Shape *lst[2];
    lst[0] = new Circle(0,0,100);
    lst[1] = new Circle(50,10,8);

    draw_template(lst, 2);

    delete lst[0];
    delete lst[1];

    cout << endl << "===============ZADANIE_3===============" << endl << endl;

    vector<double> v1 = {3.74, 71.14, 1.5};
    v1.push_back(84.1);
    v1.push_back(1.11);

    list<int> lst2 = {1, 2, 3, 4};
    lst2.push_back(5);
    lst2.push_back(6);

    cout << accumulate(v1.begin() + 2, v1.end() - 1, 0.0) << endl;
    cout << accumulate(lst2.begin(), lst2.end(), 0) << endl << endl;

    cout << "===============ZADANIE_4===============" << endl << endl;

    vector<int> v(20);

    generate_n(v.begin(), 20, SequenceGen<int>(1, 2));

    cout << "Wygenerowany wektor: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    auto it = find_if(v.begin(), v.end(), bind(greater<int>(), placeholders::_1, 4));

    if (it != v.end()) {
        cout << "Pierwszy element wiekszy od 4 to: " << *it << endl << endl;
    } else {
        cout << "Nie znaleziono." << endl << endl;
    }

    return 0;
}