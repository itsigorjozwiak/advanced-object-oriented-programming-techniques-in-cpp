# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 11

### Zadania

1. **Koncept `std::integral`**  
   Podaj przykłady wykorzystania konceptu `std::integral`, tak aby szablon funkcji działał poprawnie tylko dla typów zmiennych spełniających wymagania tego konceptu (np. funkcja `gcd` - największy wspólny dzielnik).

2. **Koncept `std::three_way_comparable`**  
   Opisz koncept `std::three_way_comparable` oraz zaprezentuj jego wykorzystanie podczas kompilacji i wykonywania programu.

   https://en.cppreference.com/w/cpp/utility/compare/three_way_comparable

3. **Klasa `MyVector` i koncept `std::copyable`**  
   Zaimplementuj prostą klasę `MyVector` z metodą `push_back`, której argumenty muszą spełniać koncept `std::copyable<T>`. Stwórz klasę z usuniętym konstruktorem kopiującym i spróbuj wykorzystać obiekt tej klasy w celu pokazania błędu kompilacji.

4. **Przeładowanie szablonu funkcji z wykorzystaniem konceptów**  
   Pokaż przykład przeładowania szablonu funkcji przy wykorzystaniu konceptów.

5. **Specjalizacja szablonu funkcji z wykorzystaniem konceptów**  
   Pokaż przykład specjalizacji szablonu funkcji dla argumentu spełniającego wymaganie konceptu.
