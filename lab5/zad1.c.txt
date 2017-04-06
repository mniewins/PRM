#include <stdio.h>

const int ROZMIAR=5;
int nieposortowane[]={4, 3, 2, 1, 0};

// funkcja porownujace dwa elementy typu integer
int porownaj(int a, int b)
{
    return a>b;
}

// sortowanie babelkowe (ang. bubble sort)
void babelki(int *tablica, int N)
{
    int zamienione, i, tmp;

    do
    {
        zamienione=0; // jezeli nie bedzie zadnej zamiany, to tablica jest juz uporzadkowana

        for(i=0;i<N-1;i++)
            if(porownaj(tablica[i], tablica[i+1]))
            {

                // zamiana dwoch sasiednich elementow
                tmp=tablica[i];
                tablica[i]=tablica[i+1];
                tablica[i+1]=tmp;

                // tablica jeszcze nie jest uporzadkowana
                zamienione=1;
            }
    }
    while(zamienione);
}


// sortowanie przez wstawianie (ang. insertion sort)
void wstawianie(int *tablica, int N)
{
    int i, j, tmp;
    for(i=1; i<N; i++)
    {
        // elementy o indeksach 0 do i-1 sa juz uporzadkowane

        tmp=tablica[i]; // wartosc i-tego elementu

        // przesuwanie elementow tablica[j]<=tmp
        j=i-1;
        while(j>=0 && porownaj(tablica[j],tmp))
        {
            tablica[j+1]=tablica[j];
            j--;
		}
        // wstawienie elementu (potrzebne jest dodanie 1 bo j bylo dekrementowane w linii 48)
        tablica[j+1]=tmp;
    }
}

// funkcja wypisujac N elementow z tablicy int
void wypisz(int *tablica, int N)
{
    int i=0;
    for(i=0;i<N;i++)
        printf("%d\n", *(tablica+i));
}

// funkcja kopiujace N elementw typu int
void kopiuj(int *skad, int *dokad, int N)
{
    int i;
    for(i=0;i<N; i++)
        *(dokad++)=*(skad++);
}


int main()
{
    int tablica[ROZMIAR];

    printf("Przed sortowaniem: \n");
    wypisz(nieposortowane, ROZMIAR);


    kopiuj(nieposortowane, tablica, ROZMIAR);
    babelki(tablica, ROZMIAR);

    printf("Po sortowaniu babelkowym: \n");
    wypisz(tablica, ROZMIAR);

    kopiuj(nieposortowane, tablica, ROZMIAR);
    wstawianie(tablica, ROZMIAR);

    printf("Po sortowaniu przez wstawianie: \n");
    wypisz(tablica, ROZMIAR);

    return 0;
}