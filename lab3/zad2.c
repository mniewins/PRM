#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pierwiastki(double a, double b, double c, double *wsk_x1, double *wsk_x2)
{
	double delta=b*b-4*a*c;
    if(delta<0)
        return 0;  // brak pierwiastkow rzeczywistych
    else if(delta==0)
    {
        // jeden pierwiastek rzeczywisty podwojny
        *wsk_x1=-b/(2*a);
        *wsk_x2=*wsk_x1;
        return 1;
    }
    else
    {
        // dwa rozne pierwiastki rzeczywiste
        *wsk_x1=(-b+sqrt(delta))/(2*a);
        *wsk_x2=(-b-sqrt(delta))/(2*a);
        return 2;
    }
}


int main()
{
    double a, b, c, delta, x1, x2;
    double test_b, test_c;
    int liczba;

    printf("Prosze podac wspolczynniki rownania kwadratowego ax^2+bx+c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // najpierw przypadki szczegolne
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                // rownanie tozsamosciowe 0=0
                liczba=-1;
            }
            else
            {
                // rownanie sprzeczne c=0
                liczba=-2;
            }

        }
        else
        {
            x1=c/b;
            x2=c/b;
            liczba=1;
        }
    }
    else
    {
        // porzadne rownanie, wiec znane metody
        liczba=pierwiastki(a, b, c, &x1, &x2);
    }

    switch(liczba)
    {
        case 0:
            printf("Liczba pierwiastkow: 0\n");
            break;

        case 1:
            printf("Liczba pierwiastkow: 1\n");
            printf("Wartosc pierwiastka: %lf\n", x1);
            break;

        case 2:
            printf("Liczba pierwiastkow: 2\n");
            printf("Wartosc pierwiastka #1: %lf\n", x1);
            printf("Wartosc pierwiastka #2: %lf\n", x2);
            break;

        case -1:
            printf("Rownanie tozsamosciowe!\n");
            break;

        case -2:
            printf("Rownanie sprzeczne!\n");
            break;
    }

    return 0;
}
