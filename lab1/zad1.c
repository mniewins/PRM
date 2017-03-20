#include <stdio.h> // naglowek do funkcji wejscia/wyjscia
#include <limits.h> // naglowek do wartosci zakresow liczb calkowitych
#include <float.h> // naglowek do wartosci zakresow liczb zmiennoprzecinkowych

/* PRM - Laboratorium 1, Zadanie 1 */
int main(){

	printf("Zakres wartosci zmiennych calkowitych:\n");

	printf("char \t min: %20d,\t max: %20d\n", CHAR_MIN, CHAR_MAX);
	printf("short \t min: %20d,\t max: %20d\n", SHRT_MIN, SHRT_MAX);
	printf("int \t min: %20d,\t max: %20d\n", INT_MIN, INT_MAX);
	printf("long \t min: %20ld,\t max: %20ld\n", LONG_MIN, LONG_MAX);

	printf("Zakres wartosci zmiennych calkowitych bezznakowych:\n");

	printf("unsigned char \t max: %20u,\t hex: %#018x\n", UCHAR_MAX, UCHAR_MAX);
	printf("unsigned short \t max: %20u,\t hex: %#018x\n", USHRT_MAX, USHRT_MAX);
	printf("unsigned int \t max: %20u,\t hex: %#018x\n", UINT_MAX, UINT_MAX);
	printf("unsigned long \t max: %20lu,\t hex: %#018lx\n\n", ULONG_MAX, ULONG_MAX);

	printf("Zakres wartosci zmiennych zamiennoprzecinkowych:\n");

	printf("float \t min: %20e,\t max: %20e\n", FLT_MIN, FLT_MAX);
	printf("double \t min: %20e,\t max: %20e\n\n", DBL_MIN, DBL_MAX);



	// Stale
	const int STALA = 6; // zwyczajowo nazwy stalych piszemy wielkimi literami
	// STALA = 7; // odkomentowac i sprawdzic co stanie sie podczas kompilacji

	// Zmienne
	unsigned int liczba = UINT_MAX; // co sie stanie jak przekroczymy inicjalizacje liczby o maksymalna wartosc? sprobowac z 0xfffffffff
	printf("Liczba: %u\n", liczba);
	printf("Po zwiekszeniu: %u\n\n", ++liczba); // co sie stanie jak przekroczymy max wartosc typu?

	// Operacje na zmiennych mozna laczyc bez wzgledu na typ zmiennej (niejawne rzutowanie)
	liczba = 6;
	float zmienna = 34.5;

	printf("Liczba calkowita a = %u\n", liczba);
	printf("Liczba zmiennoprzecinkowa b = %f\n", zmienna);

	float suma_zmiennoprzecinkowa = zmienna + liczba;
	int suma_calkowita = zmienna + liczba;

	printf("a + b = %f\n", suma_zmiennoprzecinkowa);
	printf("a + b = %d\n\n", suma_calkowita);

	// Operator modulo - oznacza reszte z dzielenia, dziala tylko dla liczb calkowitych
	printf("Reszta z dzielenia %d przez %d to %d\n\n", suma_calkowita, 3, suma_calkowita % 3); // Sprawdzic co stanie sie przy uzyciu liczby zmiennoprzecinkowej

	// Tablice
	int liczby1[2]; // Deklaracja

	liczby1[0] = 8; // Inicjalizacje
	liczby1[1] = 24; // Inicjalizacje, cd.

	int liczby2[] = {8, 24}; // Deklaracja + inicjalizacja. Sprawdzic przy pomocy debuggera czy tablice liczby1 i liczby2 zawieraja takie same wartosci
	int liczby3[6] = {8, 24}; // Sprawdzic przy pomocy debuggera jakie wartosci zawiera tablica liczby3 zadeklarowana z wiekszym rozmiarem niz zainicjowano wartosci

	int macierz[2][2] = {{1, 2}, {3, 4}}; // Tablice moga byc rowniez wielowymiarowe

	char napis[] = "Marcin";
	printf("Mam na imie: %s\n", napis); // w ten sam sposob mozemy deklarowac ciagi znakow

	liczba = 3;
	printf("%d litera mojego imienia to: %c\n", liczba + 1, napis[liczba]); // numerowanie od 0

	return 0;
}
