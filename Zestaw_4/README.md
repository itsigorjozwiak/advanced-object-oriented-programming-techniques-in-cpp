# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 4

### Zadania

1. **Szablon funkcji sumującej i klasy cech `sum_traits`**  
   Zaimplementuj szablon funkcji sumującej elementy dla podanego zakresu wskaźników. Przygotowując odpowiednie klasy cech `sum_traits` dla każdego z typów (`char`, `int`, `float`, `double`), zadbaj o poprawność typu zmiennej `total`, która w szablonie `sum` przechowuje wartość kolejnych kroków sumowania.  
2. Rozwiąż za pomocą klas cech również problem inicjalizacji zmiennej `total`.

3. **Przeciążanie szablonu i obejście braku parametrów domyślnych**  
   Szablony funkcji nie dopuszczają stosowania parametrów domyślnych. Można to ograniczenie obejść za pomocą przeciążenia szablonu, definiując szablon o mniejszej ilości argumentów, który zwraca wynik podstawienia domyślnych parametrów do bardziej ogólnego szablonu. Zmień implementację funkcji `sum` tak, aby podając odpowiednią klasę cech (`sum_char`) jako pierwszy z argumentów szablonu, można było zażądać sumowania znaków `char` do zmiennej `total` również typu `char`. Równocześnie, w przypadku gdy nie jest podana klasa cech, szablon powinien działać tak jak w zad. 2.

4. **Uogólnienie funkcji `sum` za pomocą `iterator_traits`**  
   Uogólnij funkcję `sum`, aby działała nie tylko ze wskaźnikami, ale i iteratorami. Widać, że tu użycie klas cech jest już niezbędne, musimy bowiem dowiedzieć się, na obiekty jakiego typu wskazuje iterator. Nie można do tego celu użyć typów stowarzyszonych `IT::value_type`, bo jako iterator może zostać podstawiony zwykły wskaźnik. Dlatego w STL istnieje klasa `iterator_traits`, definiująca podstawowe typy dla każdego rodzaju iteratora. Korzystając z tej klasy, zdefiniuj ogólny szablon funkcji `sum`.

Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanej niżej strony, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_5:_Klasy_cech 
