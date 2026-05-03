#pragma once

#include <string>
#include <stdexcept>
#include "kolor.hpp"

struct WyjatekPolityka {
    Kolor nieznanyKolor(std::string nazwa) {
        throw std::runtime_error("Unknown colour: " + nazwa);
    }
};

template <class Polityka = WyjatekPolityka>
class FabrykaKolorow : private Polityka {
public:
    Kolor zwrocKolor(std::string nazwa) {
        if (nazwa == "zielony" || nazwa == "green") return Kolor(0, 255, 0);
        if (nazwa == "czarny" || nazwa == "black") return Kolor(0, 0, 0);
        
        return this->nieznanyKolor(nazwa);
    }
};