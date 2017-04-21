#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Rodzaj{OWOC, WARZYWO, INNY}; // Wyliczenie stosujemy, gdy chcemy oznaczyc wiele predefiniowanych rodzajow jakiejs cechy
// Jest to wygodniejszy zapis rownowazny const int OWOC = 0; const int WARZYWO = 1; const int INNY = 2;

#define MAX_LEN 16
#define MAX_LICZBA_PRZED 10


struct Przedmiot // Struktura jest zbiorem pol, opisanym typami zmiennych
{
	char nazwa[MAX_LEN];
	char kolor[MAX_LEN];
	float cena;
	enum Rodzaj rodzaj;
};

struct Klient
{
	char imie[MAX_LEN];
	float gotowka;

	int liczba_przed;
	struct Przedmiot koszyk[MAX_LICZBA_PRZED]; // Polem struktury moze byc inna struktura, lub tablica struktur
};

void print_przedmiot(struct Przedmiot p) // Do pol struktury odwolujemy sie operatorem "."
{
	printf("%s jest %s i kosztuje %f.\n", p.nazwa, p.kolor, p.cena);
}

void opisz_przedmiot(struct Przedmiot* p, char* nazwa, char* kolor, enum Rodzaj rodzaj, float cena)
{
	strcpy(p->nazwa, nazwa); // Do pol wskaznika na strukture odwolujemy sie operatorem "->"
	strcpy(p->kolor, kolor);
	p->cena = cena;
	p->rodzaj = rodzaj;
}

void zaplac(struct Klient* k)
{
	float suma = 0.0;
	int n;

	for(n = 0; n < k->liczba_przed; n++)
		suma += k->koszyk[n].cena;

	if(suma < k->gotowka)
		printf("Klient %s zaplacil %f.\n", k->imie, suma);
	else
		printf("Klient %s nie moze zaplacic %f!\n", k->imie, suma);
}

void dodaj_przedmiot(struct Klient* k, struct Przedmiot p) // struktura moze byc przekazywana przez wskazanie lub wartosc
{
	k->koszyk[k->liczba_przed]=p;
	k->liczba_przed++;
}

int main()
{
	struct Przedmiot banan, pomarancza, pomidor, mleko; // Zmienne odwolujace sie do struktu definiujemy podobnie do typow podstawowych

	opisz_przedmiot(&banan, "Banan", "zolty", OWOC, 1.0);
	opisz_przedmiot(&pomarancza, "Pomarancza", "pomaranczowa", OWOC, 1.5);
	opisz_przedmiot(&pomidor, "Pomidor", "czerwony", WARZYWO, 1.2);
	opisz_przedmiot(&mleko, "Mleko", "biale", INNY, 2.0);

	print_przedmiot(banan);
	print_przedmiot(pomarancza);
	print_przedmiot(pomidor);
	print_przedmiot(mleko);

	printf("\nRozmiar struktury Przedmiot: %d\n", sizeof(struct Przedmiot)); // rozmiar struktury jest suma rozmiarow typow ktore zawiera
	printf("Rozmiar struktury Klient: %d\n\n", sizeof(struct Klient)); // dlaczego tu jest taki rozmiar?

	struct Klient* klient = malloc(sizeof(struct Klient)); // do struktur rowniez mozemy przypisac pamiec dynamicznie

	klient->gotowka = 3.0;
	klient->liczba_przed = 0;
	strcpy(klient->imie, "Ala"); // dlaczego tu robimy tak, a nie poprostu przypisujemy?

	dodaj_przedmiot(klient, banan);
	dodaj_przedmiot(klient, pomarancza);
	dodaj_przedmiot(klient, mleko);

	zaplac(klient);

	free(klient); // dobrym zwyczajem jest zwalnianie wczesniej zaalokowanej pamieci

	return 0;
}
