#include <iostream>
#include <memory>
/*
=================== INTELIGENTNE WSKAŹNIKI ===================
Inteligentne wskaźniki (smart pointers) w C++ służą do automatycznego zarządzania pamięcią.
Dzięki nim programista nie musi ręcznie wywoływać delete, ponieważ pamięć zostaje zwolniona,
gdy wskaźnik wychodzi z zakresu. Smart pointery są częścią biblioteki standardowej
i znajdują się w nagłówku #include <memory>. Ich głównym celem jest zapobieganie wyciekom pamięci
oraz zapewnienie bezpiecznego zarządzania zasobami zgodnie z zasadą RAII (Resource Acquisition Is
Initialization). Oznacza to, że zasób jest przejmowany podczas inicjalizacji inteligentnego wskaźnika,
a zwalniany automatycznie w jego destruktorze.
*/

using namespace std;

class Song {
public:
    Song() {
        cout << "Konstruktor\n";
    }

    ~Song() {
        cout << "Destruktor\n";
    }

    void play() {
        cout << "Playing...\n";
    }
};

int main() {
    /*
    unique_ptr

    Reprezentuje inteligentny wskaźnik posiadający dokładnie jednego właściciela obiektu. Oznacza to, że
    tylko jeden unique_ptr może zarządzać danym obiektem w tym samym czasie. Ponadto:
        -> nie można go kopiować
        -> można przenosić własność za pomocą std::move
        -> po wyjściu poza zakres automatycznie usuwa obiekt
        -> jest bardzo lekki i ma rozmiar zwykłego wskaźnika
    */

    unique_ptr<Song> song = make_unique<Song>();
    song -> play();

    /*
    shared_ptr

    Pozwala na współdzielenie własności jednego obiektu przez wiele wskaźników.
    Działa on za pomocą licznika referencji
        -> można go kopiować
        -> każdy nowy shared_ptr zwiększa licznik właścicieli
        -> obiekt zostaje usunięty dopiero gdy licznik spadnie do 0
        -> jest większy i trochę wolniejszy od unique_ptr, ponieważ
            przechowuje dodatkowy licznik referencji

    */

    shared_ptr<Song> p1 = make_shared<Song>();
    {
        shared_ptr<Song> p2 = p1;
        cout << "Reference counter after adding p2: " << p1.use_count() << "\n";
    }
    cout << "Reference counter after removing p2: " << p1.use_count() << "\n";

}