# PRM, laboratorium 5, semestr letni 2016/2017

----------------------------------------------

*Zakres materia³u*: Proste algorytmy sortowania (sortowanie b¹belkowe, sortowanie przez wstawianie). (__5 pkt__)

----------------------------------------------

## __Zadanie 1.__ Analiza prostych algorytmów sortowania.

1. W katalogu `prm4` utworzyæ nowy projekt `zad1` i do g³ównego pliku projektu skopiowaæ zawartoœæ pliku Ÿród³owego [zad1.c](zad1.c) i zapoznaæ siê z dzia³aniem programu.
2. Zapoznaæ siê z dzia³aniem obydwu algortymów sortowania (funkcje `babelki` i `wstawianie`).
3. Odpowiedzieæ na nastêpuj¹ce pytania:
	1. Ile porównañ musi wykonaæ ka¿dy z algorytmów sortowania dla 5 elementowego ci¹gu odwróconego (np. 10, 5, 3, 1, 0) i ju¿ posortowanego (np. 0, 1, 3, 5, 10)? Wskazówka: wprowadziæ globaln¹ zmienn¹ zliczaj¹ce liczbê wywo³añ funkcji `porownaj`.
	2. Jaka wartoœæ znajdzie siê na koñcu tablicy tablica po pierwszej iteracji pêtli `do-while` w algorytmie `babelki`? Jak opieraj¹c siê na tej obserwacji mo¿na przyspieszyæ algorytm?
	3. Dlaczego w warunku pêtli `while` w algorytmie `wstawianie` najpierw sprawdzany jest warunek na zmienn¹ `j`, a nastêpnie dopiero jest wywo³ywana funkcja `porownaj`?
	4. Jaka prosta modyfikacja pozwoli zmieniæ porz¹dek sortowanie obydwy algorytmów z rosn¹cego na malej¹cy?

## __Zadanie 2.__ Wykorzystanie algorytmów.

Treœæ zadania zostanie podana przez prowadz¹cego w trakcie zajêæ