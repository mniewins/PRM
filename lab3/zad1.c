#include <stdio.h>

int a = 8; 								// zmienna globalna

void info(char *nazwa_bloku, int zmienna)	// znak '*' bedzie wytlumaczony nizej
{
	printf("W bloku %s zmienna a = %d\n", nazwa_bloku, zmienna);
}

void funkcja()							// 'void' oznacza, ze funkcja nie zwraca zadnej wartosci
{
	info("funkcji", a); 				// wywolanie zdefniowanej powyzej funkcji 'info'
}

int suma(int x, int y)	 				// funkcje moga zwracac wartosci
{
	return x + y;
}

void czy_parzysta(const int); 			/* funkcje moga byc zadeklarowane w prosty sposob - bez nazw argumentow i opisu dzialania,
							    		 definicja (czyli co funkcja robi) musi jednak zostac podana pozniej - patrz koniec pliku.
							    		 Sprawdzic co stanie sie, jak usuniemy te deklaracje */

int liczba_zwiekszona(int x)			// co sie stanie gdy zadeklarujmy argument 'x' jako 'const int x'?
{
	return ++x;
}

void zwieksz_liczbe(int a)				// chcemy jakos zwiekszyc zmienna przez wywolanie funkcji
{
	++a; 								// zobaczyc w debuggerze, ktora z zadeklarowanych zmiennych 'a' jest tak naprawde zwiekszana
}

void zwieksz_przez_adres(int* x)		// 'int*' oznacza, ze jako argument przekazujemy wskaznik to zmiennej typu 'int', t.j.
{										// adres w pamieci komputera, gdzie znajduje sie wartosc 'int'

	(*x)++; 							/* samo 'x' oznacza wskaznik (adres); aby wykonywac operacje arytmetyczne na wartosci
										musimy odwolac sie do zmiennej pod tym adresem uzywajac zapisu '(*x)' */
}

int main()
{
	int a = 20;							// zmienna lokalna dla funkcji 'main'

	info("main", a);
	funkcja(); 							// funkcja 'funkcja' widzi inna wartosc 'a' niz funkcja 'main', dlaczego?

	int b = 9;
	int wynik = suma(a, b);

	printf("\na + b = %d\n\n", wynik); 	// funkcja zwrocila nam wynik dzialania

	czy_parzysta(a); 					// w funkcjach rowniez mozemy stosowac wszystkie bloki warunkowe (if,else,switch) i petle (for, while, itd...)
	czy_parzysta(b);

	printf("\na + 1 = %d\n", liczba_zwiekszona(a)); // co sie stanie jezeli argument w deklaracji funkcji jest 'const'?

	zwieksz_liczbe(a);					// nie dziala tak jak bysmy chcieli
	printf("Zmienna 'a' po wywolaniu zwieksz_liczbe = %d\n", a);

	zwieksz_przez_adres(&a); 			// znak '&' oznacza ze odwolujemy sie nie do samej zmiennej, ale do adresu pamieci w ktorym ta zmienna jest przechowywana
	printf("Zmienna 'a' po zwieksz_przez_adres = %d\n", a);

	return 0;
}

void czy_parzysta(const int x) 			// jezeli argument funkcji nie bedzie ulegal zmianie w trakcie jej wykonania, mozemy uzyc slowa kluczowego 'const'
{
	if(x % 2 == 0)
		printf("Liczba %d jest parzysta!\n", x);
	else
		printf("Liczba %d jest nieparzysta!\n", x);
}
