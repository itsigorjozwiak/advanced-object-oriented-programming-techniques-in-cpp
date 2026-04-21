# Zaawansowane techniki programowania obiektowego w C++

## Zestaw nr 5

### Zadania

1. **Szablon is_class**  
Zaimplementuj szablon `is_class` służący do sprawdzania, czy dany typ jest klasą.

2. **Sprawdzanie obecności value_type**  
Napisz szablon, który sprawdza, czy jego parametr posiada typ stowarzyszony `value_type`, np.: `has_value_type<std::vector<int> >::yes` powinno mieć wartość `true`, a `has_value_type<int>::yes` wartość `false`.

3. **Szablon Is_convertible**  
Zaimplementuj szablon klasy `Is_convertible`, za pomocą którego możliwe jest stwierdzenie, czy jeden z typów można rzutować na drugi.

4. **Zdejmowanie kwalifikatorów (szablon Strip)**  
Zdefiniuj szablon `Strip`, który jako funkcja typów dokonuje operacji usunięcia jednego lub obydwu kwalifikatorów (`const` oraz `&`) i uzyskanie gołego typu podstawowego.

Do wykonania zadań wykorzystałem materiały zaczerpnięte z podanej niżej strony, implementując je w ich oryginalnej formie lub wprowadzając własne, delikatne modyfikacje, z zaznaczeniem, że prawa autorskie do pierwotnych treści należą do ich twórców.

https://wazniak.mimuw.edu.pl/index.php?title=Zaawansowane_CPP/Wyk%C5%82ad_6:_Funkcje_typ%C3%B3w_i_inne_sztuczki
