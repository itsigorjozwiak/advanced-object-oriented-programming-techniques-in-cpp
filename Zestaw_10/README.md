# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 10

### Zadania

1. **Execution Policy w C++17**  
   Opisz, wykorzystując funkcjonalne przykłady występujące w C++17, następujące polityki wykonywania:
   - `std::execution::sequenced_policy`,
   - `std::execution::parallel_policy`,
   - `std::execution::parallel_unsequenced_policy`.

2. **Synchronizacja dostępu do współdzielonego wektora**  
   Wykonanie bardzo prostego programu:
   ```cpp
   #include <vector>
   #include <algorithm>
   #include <execution>
   #include <mutex>

   int main() {
       std::vector<int> vec(10'000'000);
       std::iota(vec.begin(), vec.end(), 0);
       std::vector<int> output;

       std::for_each(std::execution::par, vec.begin(), vec.end(),
           [&output](int& elem) {
               if (elem % 2 == 0) {
                   output.push_back(elem);
               }
           });
   }
   ```

   zakończy się tragicznie z punktu widzenia programisty (core dumped). Wykorzystując `std::lock_guard`, zmodyfikuj wyrażenie lambda tak, aby nie dochodziło do niezsynchronizowanego dostępu do wektora wyjściowego. Porównaj wydajność przy wykorzystaniu polityki typu `seq`.
