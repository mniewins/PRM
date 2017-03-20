# PRM, laboratorium 1, semestr letni 2016/2017

----------------------------------------------

*Zakres materiału*: Typy proste, "typ" łańcuchowy. Stałe i zmienne. Podstawowe operacje arytmetyczne

----------------------------------------------

## __Zadanie 1.__ Typy zmiennych, stałe. Deklaracje, inicjalizacje. Operacje na zmiennych, ciągi znakowe i standardowe wyjście.

1. W katalogu `lab1` utworzyć nowy projekt `zad1` i do głównego pliku projektu skopiować zawartość pliku źródłowego [zad1.c](zad1.c)
2. Zapoznać się z własnościami typów liczbowych oraz przeanalizować sposób ich wyświetlania przy użyciu funkcji `printf`. (*linie 10-25*)
3. Usunąć kometarz i sprawdzić co stanie się, jeżeli spróbujemy zmienić wartość stałej. (*linia 31*)
4. Zaobserwować co dzieje się jeżeli przekroczymy maksymalną wartość zmiennej (*linie 34-36*)
5. Zaobserwować co dzieje się jeżeli przypisujemy zmiennym wartości innych typów (*linie 39-49*)
6. Zapoznać się z działaniem operatora modulo (*linia 52*)
7. Przy użyciu debuggera sprawdzić z jakimi wartościami inicjalizują się tablice inicjalizowane w różny sposób (*linie 55-63*)
8. Zapoznać się ze sposobem wyświetlania ciągów znakowych (*linie 65-69*)

## __Zadanie 2.__ Standardowe wejście, funkcja `scanf`.

1. W katalogu `lab1` utworzyć nowy projekt `zad2` i do głównego pliku projektu skopiować zawartość pliku źródłowego [zad2.c](zad2.c)
2. Uruchomić program i zapoznać się z jego działaniem.
3. Zmodyfikować program tak, aby:
	* nie pozwalał na wprowadzenie większej liczby znaków niż zadeklarowany rozmiar ciągu znaków (odpowiednia modyfikacja specyfikatora formatowania `%s`)
	* przechowywał wartość zmiennej `wiek` w typie o najmniejszej zajętości pamięci (zwrócić uwagę na konieczność zmiany specyfikatora formatowanie w funkcji `scanf`)
	* umożliwał wprowadzenie i wypisanie liczb zmiennoprzecinkowych w podwójnej precyzji