# TSP_GeneticAlgorithm

Projekt implementuje **algorytm genetyczny** do rozwiązywania problemu komiwojażera (TSP - Traveling Salesman Problem). Program przyjmuje parametry wejściowe przez linię komend, umożliwiając użytkownikowi pełną konfigurację algorytmu.

---

## Opis funkcjonalności

1. **Graph**: Klasa odpowiedzialna za reprezentację grafu oraz wczytywanie danych z pliku.
2. **GeneticAlgorithm**: Implementacja algorytmu genetycznego do rozwiązywania problemu komiwojażera.
3. **Main**: Główny plik programu (`main.cpp`), który obsługuje wejście użytkownika i uruchamia algorytm genetyczny z zadanymi parametrami.

---

## Funkcje programu

- **Wczytywanie danych grafu**:
  - Możliwość podania nazwy pliku z danymi grafu (plik powinien znajdować się w odpowiedniej lokalizacji i mieć poprawny format).
- **Konfiguracja algorytmu genetycznego**:
  - Ustawienie czasu wykonywania algorytmu w sekundach.
  - Definiowanie liczebności populacji początkowej.
  - Określenie współczynników krzyżowania i mutacji.
  - Wybór typu krzyżowania (OX - Order Crossover, PMX - Partially Matched Crossover).
- **Uruchamianie algorytmu**:
  - Znalezienie zbliżonego do optymalnego rozwiązania TSP przy użyciu algorytmu genetycznego.
  - Wynik jest wyświetlany w konsoli.

---

## Użycie programu

Program uruchamia się z parametrami podanymi w linii komend w następującej kolejności:

```plaintext
<plik> <czas[s]> <populacja> <wsp.krzyżowania> <wsp.mutacji> <typ.krzyżowania>
```

## Przkład uruchomienia 
program.exe graph.txt 60 100 0.8 0.01 PMX
1. Nazwa pliku (graph.txt)
    - Ścieżka do pliku zawierającego dane grafu. Plik powinien znajdować się w odpowiednim katalogu i być w poprawnym formacie opisującym graf dla problemu komiwojażera (TSP).
3. Czas [s] (60)
    - Maksymalny czas działania algorytmu w sekundach. Algorytm przestanie działać po upływie podanego czasu.
5. Populacja (100)
    - Liczba osobników w populacji początkowej algorytmu genetycznego. Większa populacja może zwiększyć szanse na znalezienie lepszego rozwiązania, ale zwiększa też czas obliczeń.
7. Współczynnik krzyżowania (0.8)
    - Prawdopodobieństwo zastosowania operatora krzyżowania podczas tworzenia nowej populacji. Zakres wartości: 0.0 - 1.0.
9. Współczynnik mutacji (0.01)
     - Prawdopodobieństwo mutacji każdego osobnika w populacji. Zakres wartości: 0.0 - 1.0.
11. Typ krzyżowania (PMX lub OX)
    - PMX: Krzyżowanie częściowo dopasowane (Partially Matched Crossover).
    -  OX: Krzyżowanie porządkowe (Order Crossover).

