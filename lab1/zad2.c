#include <stdio.h> // naglowek do funkcji wejscia/wyjscia

/* PRM - Laboratorium 1, Zadanie 2 */
int main(){
	char napis[20];
	int wiek;
	int liczby[2];

	printf("Prosze wpisac swoje imie:\n");
	scanf("%s", napis);

	printf("Podaj swoj wiek w latach:\n");
	scanf("%d", &wiek);

	printf("Podaj swoje 2 ulubione liczby oddzielone spacja:\n");
	scanf("%d %d", &liczby[0], &liczby[1]);

	printf("Nazywasz sie %s, masz %d lat.\nTwoje 2 ulubione liczby po zsumowaniu daja: %d\n", napis, wiek, liczby[0] + liczby[1]);

	return 0;
}
