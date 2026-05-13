# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 8

### Zadania

1. **Szablon funkcji `integrate`**  
   Zaimplementuj szablon funkcji `integrate`, która jako pierwszy argument przyjmuje dowolny funktor. Funkcja `integrate` ma dokonywać całkowania w podanym zakresie np.:  
   ```cpp
   std::cout<< ::integrate(sina(0),0,3.1415926,0.01)<<std::endl; 
   std::cout<< ::integrate(sina(1),0,3.1415926,0.01)<<std::endl; 
   std::cout<< ::integrate(sina(2),0,3.1415926,0.01)<<std::endl;
   ```

2. **Funktory `Variable` oraz `Constant`**  
   Stwórz odpowiednie funktory `Variable` oraz `Constant`, które mogą być używane jako argumenty funkcji `integrate`:  
   ```cpp
   Variable x;  
   integrate(x,0,1,0.001);  
   integrate(Constant(1.0),0,1,0.001);
   ```  

3. **Funktor `AddExpr` i operator dodawania**  
   Funktor `AddExpr` jest używany przez szablon operatora dodawania dwóch funktorów:
   ```cpp
   template <typename LHS, typename RHS>
   AddExpr<LHS,RHS> operator+(const LHS &l, const RHS &r)
   ```
   Zwracany funktor może być podstawiony do funkcji całkującej. Dokonaj specjalizacji szablonu operatora dodawania dla przypadku, w którym jeden z argumentów jest typu `double`, tak aby możliwe było następujące użycie funkcji `integrate`:  
   ```cpp
   integrate(x + 1.,0,1,0.001);
   ```

4. **Szablony `DivExpr` oraz `SinExpr`**  
   Zaimplementuj szablony: `operator/(double l, const RHS &r)`, `DivExpr`, `sin` oraz `SinExpr`. Dokonaj całkowania następującej funkcji:  
   ```cpp
   integrate(1./sin(x+1.),0,1,0.001);
   ```

5. **Klasa `Expr` opakowująca wyrażenia**  
   Operatory arytmetyczne nie będą miały jak automatycznie wydedukować typu `T`:  
   ```cpp
   template<typename T,typename LHS,typename RHS>
   Add<T,LHS, RHS> operator+(const LHS &l, const RHS &r)
   ``` 
   ponieważ typ `T` nie pojawia się w argumentach wywołania. Zaimplementuj dodatkową klasę `Expr` "opakowującą" wyrażenia, która będzie przenosiła informację o typie. Przedstaw przykłady całkowania funkcji z użyciem zmiennej innego typu niż `double`.

6. **Rozszerzenie dla funktorów dwóch zmiennych**  
   Zaimplementuj rozszerzenie klasy `Variable` dla przypadku funktorów dwóch zmiennych, tj. klasy `First` oraz `Second`. Podaj przykład całkowania prostej funkcji np. $x+y$.

Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanej niżej strony, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_9:_Szablony_wyra%C5%BCe%C5%84
