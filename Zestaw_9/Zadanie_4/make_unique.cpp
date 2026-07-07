#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Example{
    double a_;
    double b_;
    string c_;
public:
    Example() : a_(0), b_(0), c_("") {}

    Example(double a, double b, const string& c) : a_(a), b_(b), c_(c) {
        cout << "The following values were provided to the 'Example' class constructor: ";
        cout << a_ << ", " << b_ << ", " << c_ << endl;
    }
};

int main(){
    /*
    --- zastosowanie szablonu template< class T, class... Args > unique_ptr<T> make_unique( Args&&... args ); ---
    Ta specjalizacja umożliwia utworzenie pojedynczego obiektu typu T. Przyjmuje dowolną liczbę argumentów
    dowolnego typu i przekazuje je do konstruktora, więc decydujemy się na wybór tej specjalizacji, gdy
    chcemy utworzyć pojedynczy obiekt wymagający parametrów konstruktora, które w zależności od obiektu
    mogą być skrajnie różne
    */
    unique_ptr<Example> example = make_unique<Example>(1, 2.22, "Przyklad");
    unique_ptr<int> example2 = make_unique<int>(154);

    /*
    --- zastosowanie template< class T > unique_ptr<T> make_unique( std::size_t size ); ---
    Ta specjalizacja służy do tworzenia dynamicznej tablicy obiektów typu T o zadanym rozmiarze.
    Decydujemy się na nią, gdy potrzebujemy kolekcji elementów tego samego typu, których liczba
    jest znana w momencie tworzenia, ale nie chcemy używać zwykłej tablicy ani vectora.
    */

    unique_ptr<Example[]> arr = make_unique<Example[]>(3);
    arr[0] = Example(10, 20, "X");
    arr[1] = Example(30, 40, "Y");
    arr[2] = Example(50, 60, "Z");

    unique_ptr<int[]> arr2 = make_unique<int[]>(5);
    return 0;
}