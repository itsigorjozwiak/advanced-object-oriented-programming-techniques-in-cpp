#pragma once
#include <iostream>
#include <compare>
#include <concepts>

/*
=================== std::three_way_comparable ===================
Koncept std::three_way_comparable z C++20 sprawdza w czasie kompilacji,
czy dany typ wspiera operator trójstronnego porównania ("spaceship operator" <=>).
Wymaga również, aby zachowana była pełna spójność logiczna dla
pozostałych operatorów relacyjnych (==, !=, <, >, <=, >=).

Wykorzystanie:
    -> Podczas kompilacji: koncept jest używany jako ograniczenie
       szablonu (template<std::three_way_comparable T>). Jeśli typ
       nie posiada operatora <=>, kompilator odrzuci kod i wyrzuci błąd.
    -> Podczas wykonywania (runtime): operator <=> jest faktycznie
       wywoływany na przekazanych obiektach, a jego wynik (zwracający
       kategorie takie jak np. mniejsze, większe, równe) służy do
       sterowania logiką programu w locie.
*/

struct Number {
    int value;
    auto operator<=>(const Number&) const = default;
};

template<std::three_way_comparable T>
void compare_objects(const T& a, const T& b) {
    auto result = a <=> b;

    if (result < 0){
        std::cout << "The first object is smaller." << std::endl;
    } else if (result > 0){
        std::cout << "The first object is greater." << std::endl;
    } else{
        std::cout << "The objects are equal." << std::endl;
    }
}