# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 9

### Zadania

1. **Inteligentne wskaźniki `shared_ptr` i `unique_ptr`**  
   Objaśnij działanie inteligentnych wskaźników `std::shared_ptr` oraz `std::unique_ptr`.

2. **Porównanie rozmiaru wskaźników**  
   Sprawdź, czy rozmiar inteligentnego wskaźnika różni się od rozmiaru zwykłego wskaźnika.

3. **Szablon funkcji `SongFactory`**  
   Zaimplementuj szablon funkcji `SongFactory`, tak aby obiekt `song` był wskaźnikiem typu `unique_ptr` dla obiektów klasy `Song`:
   ```cpp
   auto song = SongFactory(L"Michael Jackson", L"Beat It");
   ```
   Przedstaw działanie konstruktora i destruktora obiektu przechowywanego przez wskaźnik we wnętrzu inteligentnego wskaźnika. Następnie wypełnij kontener:
   ```cpp
   std::vector<std::unique_ptr<Song>> songs;
   ```
   oraz pokaż, że zakresowa pętla `for` musi wykorzystywać referencje podczas iteracji po elementach kontenera.

4. **Specjalizacje funkcji `make_unique`**  
   Wyjaśnij zastosowanie dwóch możliwych specjalizacji dla szablonu `unique_ptr`:
   ```cpp
   template<class T, class... Args>
   std::unique_ptr<T> make_unique(Args&&... args);
   ```
   oraz
   ```cpp
   template<class T>
   std::unique_ptr<T> make_unique(std::size_t size);
   ```

5. **Licznik referencji w `shared_ptr`**  
    Pokaż, że używanie wskaźnika typu `shared_ptr` zapewnia wywołanie destruktora w przypadku znikania ostatniego z nich.
