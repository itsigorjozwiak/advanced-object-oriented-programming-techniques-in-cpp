#include <iostream>
#include <string>
#include <stdexcept>
#include "Zadanie_1/kolor.hpp"
#include "Zadanie_1/fab_kol.hpp"
#include "Zadanie_1/PolitykaDefaultowegoKoloru.hpp"
#include "Zadanie_2/stack.hpp"
#include "Zadanie_2/checking_policy.hpp"

using namespace std;

int main() {
    cout << "===============ZADANIE_1===============" << endl << endl;
    FabrykaKolorow<> default_factory;

    cout << "Is it possible to get a known color 'zielony'?" << endl;
    cout << "Expected: RGB(0, 255, 0)" << endl;
    cout << "Result: " << default_factory.zwrocKolor("zielony") << endl << endl;

    cout << "Is it possible to get a known color 'black'?" << endl;
    cout << "Expected: RGB(0, 0, 0)" << endl;
    cout << "Result: " << default_factory.zwrocKolor("black") << endl << endl;

    cout << "What happens when requesting an unknown color 'fioletowy'?" << endl;
    try {
        cout << default_factory.zwrocKolor("fioletowy") << endl;
    } catch (const exception& e) {
        cout << e.what() << endl << endl;
    }
    
    typedef PolitykaDefaultowegoKoloru<128, 128, 128> GrayPolicy;
    FabrykaKolorow<GrayPolicy> custom_factory;

    cout << "Is it possible to get a known color 'zielony' from the custom factory?" << endl;
    cout << "Expected: RGB(0, 255, 0)" << endl;
    cout << "Result: " << custom_factory.zwrocKolor("zielony") << endl << endl;

    cout << "What happens when requesting an unknown color 'fioletowy' from the custom factory?" << endl;
    cout << "Expected grey: RGB(128, 128, 128)" << endl;
    cout << "Result: " << custom_factory.zwrocKolor("fioletowy") << endl << endl;

    cout << "What happens when requesting an unknown color 'yellow' from the custom factory?" << endl;
    cout << "Expected grey: RGB(128, 128, 128)" << endl;
    cout << "Result: " << custom_factory.zwrocKolor("yellow") << endl << endl;

    cout << "===============ZADANIE_2===============" << endl << endl;

    Stack<int, 2> default_stack;

    default_stack.push(10);
    default_stack.push(20);
    cout << "On top of the default_stack is: " << default_stack.top() << endl;
    default_stack.pop();
    cout << "On top of the default_stack is: " << default_stack.top() << endl << endl;

    Stack<double, 2, Abort_on_error_policy> strict_stack;

    strict_stack.push(3.14);
    strict_stack.push(2.71);
    cout << "On top of the strict_stack is: " << strict_stack.top() << endl;
    strict_stack.pop();
    cout << "On top of the strict_stack is: " << strict_stack.top() << endl << endl;

    //strict_stack.push(55.5);

    /*
    strict_stack.pop();
    strict_stack.pop();
    strict_stack.pop();
    */

    //strict_stack.top();

    
    return 0;
}