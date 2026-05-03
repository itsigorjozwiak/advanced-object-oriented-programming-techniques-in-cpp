# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 6

### Zadania

1. **Fabryka kolorów i klasa wytycznych**  
   Przeanalizuj przykład zaczynający się od pliku `glowny.cpp`. Zamienia on nazwy zrozumiałe dla człowieka ("czarny", "zielony") na strukturki ze składowymi RGB, wykorzystując do tego celu fabrykę kolorów. Domyślną reakcją fabryki na przekazanie nieznanej nazwy koloru powinno być rzucenie wyjątkiem, ale chcemy zachować możliwość zmiany tej defaultowej reakcji; wprowadzono więc klasę wytycznych. Zwróć uwagę na podział tego projektu na poszczególne pliki źródłowe. Zaimplementuj w odrębnym pliku (albo plikach) alternatywną politykę, która zamiast wyjątku zwraca pewien ustalony kolor domyślny. Przerób ją następnie z klasy na szablon klasy tak, aby można było zadawać kolor domyślny jako trzy parametry tego szablonu.

   *Plik `glowny.cpp`:*
   ```cpp
   #include <iostream>
   using std::cin;
   using std::cout;

   #include "kolor.h"
   #include "fab_kol.h"

   class MojaPolityka
   {
   public:
       Kolor nieznanyKolor(std::string nazwa)
       { return Kolor(); }
   };

   FabrykaKolorow<> fabryka;
   FabrykaKolorow<MojaPolityka> moja_fabryka;

   int main()
   {
       try {
           cout << fabryka.zwrocKolor("zielony") << '\n';
           cout << fabryka.zwrocKolor("green") << '\n';
       } catch(...) {
           cout << "Zlapano wyjatek.\n";
       }

       cout << moja_fabryka.zwrocKolor("zielony") << '\n';
       cout << moja_fabryka.zwrocKolor("green") << '\n';

       return 0;
   }
   ```

2. **Rozszerzenie szablonu klasy `Stack` o politykę sprawdzania**  
   Zmodyfikuj prosty szablon stosu:  
   ```cpp
   template<typename T = int , size_t N = 100> class Stack {
   ```  
   przez dodanie nowego parametru, który będzie określał klasę wytyczną do sprawdzenia zakresu pamięci:  
     
    ```cpp
   template<typename T = int , size_t N = 100,
            typename Checking_policy = No_checking_policy > class Stack {
   private:        
       T _rep[N];
       size_t _top; // …. 
    ```  
   Klasa wytycznych powinna posiadać minimum 3 funkcje składowe: 
   - `check_push(size_t, size_t)` – sprawdza możliwość dodania elementu,
   - `check_pop(size_t)` – sprawdza możliwość usunięcia elementu,
   - `check_top(size_t)` – sprawdza dostęp do elementu na szczycie stosu.  
   
   Zaimplementuj przykłady klasy wytycznych dla strategii:  
   - `No_checking_policy` – brak sprawdzania warunków,
   - `Abort_on_error_policy` – przerywanie działania programu w przypadku wykrycia błędu.

Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanych niżej stron, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_7:_Klasy_wytycznych
https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/%C4%86wiczenia_7:_Klasy_wytycznych
