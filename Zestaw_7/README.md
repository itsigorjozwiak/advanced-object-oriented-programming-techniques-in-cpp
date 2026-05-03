# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 7

### Zadania

1. **Szablon silni**  
   Napisz szablon funkcji lub klasy wyliczający funkcję silnia.

2. **Szablon potęgowania `Pow<N,M>`**  
   Zaimplementuj szablon `Pow<N,M>` obliczający $N^M$.

3. **Metaprogram funkcji `pow(x)`**  
   Wymyśl i zaimplementuj jako metaprogram szybszy algorytm funkcji `pow(x)`.

4. **Rozwinięcie numeryczne funkcji `sin(x)`**  
   Napisz szablon generujący pierwsze N wyrazów rozwinięcia funkcji `sin(x)`.

5. **Iloczyn skalarny**  
   Napisz szablon generujący funkcję implementującą iloczyn skalarny dwóch wektorów:  
   ```cpp
   template<size_t N>  
   double inner(double *x, double *y);
   ```

6. **Uniwersalny iloczyn skalarny**  
   Rozszerz powyższy szablon tak, aby również typ elementów wektora był parametrem szablonu:  
   ```cpp
   template<size_t N, typename T>
   T dot(T *x, T *y);
   ```


Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanej niżej strony, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_8:_Metaprogramowanie
