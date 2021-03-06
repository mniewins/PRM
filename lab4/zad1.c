#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20 // maksymalna liczba studentow
#define LICZBA_ZADAN 6 // liczba ocenianych zadan
#define BUF_SIZE 256 // wielkosc bufora znakowego

char *dane[MAX]; // tablica przechowujaca imiona i nazwiska studentow (czyli wskazniki do tablic znakowych)
float oceny[MAX][LICZBA_ZADAN]; // tablica przechowujaca oceny

int indeks=0; // indeks pierwszej wolnej pozycji w dzienniku

// Funkcja dodajaca nowa osobe do dziennika
int dodaj(char *nowe_imie_nazwisko, float *nowe_oceny)
{
    char *kopia;
    int i;

    if(indeks<MAX-1) // sprawdzanie, czy jest jeszcze miejsce w tablicy
    {
        kopia=malloc((strlen(nowe_imie_nazwisko)+1)*sizeof(char)); // rezerwacja pamieci, adres zarezerwowanego obszaru wpisywany do wskaznika 'kopia'
        strcpy(kopia, nowe_imie_nazwisko); // kopiowanie ciagu znakowego 'nowe_imie_nazwisko' pod adres w 'kopia'
        dane[indeks]=kopia; // element 'dane[indeks]' wskazuje teraz na to samo co 'kopia'

        for(i=0; i<LICZBA_ZADAN; i++)
            oceny[indeks][i]=nowe_oceny[i]; // przepisanie ocen

        return indeks++; // zwraca numer studenta
    }
    else
        return -1; // nie ma juz miejsca w tablicy

}

void wypisz_srednia()
{
    if(indeks==0)
    {
        printf("Brak danych!\n");
        return;
    }

    int i, j;
    float srednia=0;

    for(i=0; i<indeks; i++)
        for(j=0; j<LICZBA_ZADAN; j++)
        {
            srednia+=oceny[i][j];
        }
    srednia/=(indeks*LICZBA_ZADAN);

    printf("\nSrednia: %f\n\n", srednia);
}

// Funkcja wypisujaca oceny z zadan
void wypisz_oceny()
{
    if(indeks==0)
    {
        printf("Brak danych!\n");
        return;
    }

    int i, j;

    printf("\n");

    for(i=0; i<indeks; i++)
    {
        printf("%-30s ", dane[i]); // wypisanie imienia i nazwiska

        for(j=0;j<LICZBA_ZADAN; j++)
            printf("%1.1f ", oceny[i][j]); // wypisanie oceny

        printf("\n");
    }

    printf("\n");
}


// Funkcja zwalniajaca pamiec zaalokowana w 'dodaj'
void zwolnij()
{
    while(--indeks>=0)
        free(dane[indeks]); // zwalnianie pamieci zaalokowanej w funkcji 'dodaj'

}


int main()
{
    char bufor[BUF_SIZE];
    float oceny[LICZBA_ZADAN];
    int i;

    int opcja, koniec=0;

    while(!koniec)
    {
        printf("[1] Wprowadzenie danych nowego studenta\n");
        printf("[2] Wypisanie ocen\n");
        printf("[3] Obliczenie sredniej\n");
        printf("[0] Zakonczenie programu\n");

        printf("Wybierz opcje: ");
        scanf("%d", &opcja);

        while(getchar()!='\n'); // czyszczenie bufora wejsciowego

        switch(opcja)
        {
            case 1:
                printf("Wprowadz imie i nazwisko studenta: ");

                gets(bufor); // wczytanie pojedynczej linii

                for(i=0; i<LICZBA_ZADAN; i++)
                {
                    printf("Ocena z zadania %d: ", i+1);
                    scanf("%f", &oceny[i]);
                }

                dodaj(bufor, oceny);
                break;

            case 2:
                wypisz_oceny();
                break;

            case 3:
                wypisz_srednia();
                break;

            case 0:
            default:
                koniec=1;
                break;
        }

    }

    zwolnij(); //zwolnienie pamiecie zaalokowanej podczas pracy programu

    return 0;
}
