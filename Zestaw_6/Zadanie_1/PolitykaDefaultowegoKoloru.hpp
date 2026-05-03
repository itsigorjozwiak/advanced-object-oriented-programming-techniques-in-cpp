#pragma once

#include "kolor.hpp"
#include <string>

template <int red, int green, int blue>
struct PolitykaDefaultowegoKoloru {
    Kolor nieznanyKolor(std::string nazwa) {
        return Kolor(red, green, blue);
    }
};