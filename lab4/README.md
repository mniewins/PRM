# PRM, laboratorium 4, semestr letni 2016/2017

----------------------------------------------

*Zakres materiału*: Wskaźniki, tablice, "typ" łańcuchowy. (__5 pkt__)

----------------------------------------------

## __Zadanie 1.__ Przetwarzanie tablic, dynamiczna alokacja pamięci.

1. W katalogu `prm4` utworzyć nowy projekt `zad1` i do głównego pliku projektu skopiować zawartość pliku źródłowego [zad1.c](zad1.c) i zapoznać się z działaniem programu.
2. Prześledzić kod źródłowy programu, zwrócić szczególną uwagę na użycie funkcji `malloc` i `free` oraz `strlen` i `strcpy`.
3. Odpowiedzieć na następujące pytania:
	1. Dlaczego w funkcji `dodaj` tworzona jest kopia ciągu znakowego `nowe_imie_nazwisko`? Sprawdzić, co się stanie, gdy zamiast pierwszych trzech instrukcji w bloku instrukcji `if` (t.j. wywołania funkcji `malloc`, `strcpy`, oraz przypisania `dane[indeks]=kopia`) wykona się tylko przypisanie `dane[indeks]=nowe_imie_nazwisko` (wykomentować wtedy też wywołanie funkcji `zwolnij` na końcu bloku `main`)?
	2. Dlaczego w argumencie funkcji `malloc` do wyniku działania funkcji `strlen` dodaje się jeden?
	3. Co się stanie, gdy typ zmiennej `indeks` zmieni się na `unsigned int` (zwrócić uwagę na zapis warunku pętli w funkcji `zwolnij`).

## __Zadanie 2.__ Modyfikacje programu.

Treść zadania zostanie podana przez prowadzącego w trakcie zajęć.

