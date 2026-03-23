# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 3

### Zadania

1. **Implementacja funkcji `max` dla różnych typów**  
   Podaj implementacje funkcji `max` dla różnego typu argumentów. Skorzystaj z możliwości przeciążania i specjalizacji szablonów funkcji dla:  
    `max(T a, T b)`,  
    `max(T *a, T *b)`,  
    `max(T *data, size_t n)`,  
    `max(char *a,char *b)`,  
    `max(const char *a,const char *b)`,  
    `max(char *a,const char *b)`.

3. **Szablon funkcji `convert`**  
   Na przykładzie szablonu funkcji `convert` pokaż, że jest możliwe zdefiniowanie dwóch funkcji o tej samej nazwie i argumentach wywołania, różniących się tylko zwracanym typem.

4. **Specjalizacja częściowa szablonów klas**  
   W przeciwieństwie do szablonów funkcji, szablony klas nie mogą być przeciążane, a jedynie specjalizowane. Oznacza to, że w programie może istnieć tylko jeden szablon podstawowy o danej nazwie. Proszę zaimplementować specjalizację częściową, która jest dozwolona tylko dla szablonów klas, dla podanych podzbiorów parametrów:  
   `Stack<T,666>`,  
    `Stack<T*,N>`,  
    `Stack<double,N>`,  
    `Stack<int *,N>`,  
    `Stack<double,666>`,  
   `Stack<double *,44>`.

6. **Szablon klasy `Stack` i kontenery STL**  
   Zaimplementuj szablon klasy `Stack` wraz z jej specjalizacjami tak, aby działała ze zwykłymi tablicami oraz kontenerami STL:
   `Stack<int,100> s_default;`,  
    `Stack<int,0,std::vector<int> > s_container;`.

8. **Funktory porównujące i odwrócone sortowanie**  
   Zapoznaj się z rodziną funktorów porównujących, do której należą np. `less<>()`, `greater<>()`, `less_equal<>()`, `greater_equal<>()`. Przypomnij sobie pojemnik `std::set`. Następnie napisz programik korzystający ze zbioru liczb posortowanego odwrotnie (czyli malejąco).


Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanej niżej strony, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_3:_Szablony_II
