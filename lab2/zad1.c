#include <stdio.h>

int main()
{

    // Obliczanie silni pojedynczej liczby calkowitej na rozne sposoby

    unsigned long int n, silniaFor, silniaDo, silniaWhile;
    unsigned int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%u", &liczba);

    // Sposob pierwszy
    n=liczba;
    for(silniaFor=n--; n>1; n--)
    {
        silniaFor*=n;
    }

    n=liczba;

    // Sposob drugi
    silniaDo=1;
    do
    {
        silniaDo*=n--;
    }
    while(n>1);

    // Sposob trzeci
    n=1;
    silniaWhile=1;
    while(n<=liczba)
    {
        silniaWhile*=n++;
    }

    printf("Silnia %u wynosi: %lu (petla for), %lu  (petla do-while), %lu (petla while).\n", liczba, silniaFor, silniaDo, silniaWhile);

    return 0;

}
