# PRM, laboratorium 0


*Zakres materiału*: Konta, konsola, środowisko uruchomieniowe. Pierwszy
program, funkcja standardowa `printf`

## Zadanie 1. Uruchomienie i prześledzenie działania prostego programu
w środowisku Code::Blocks.

1 Utworzyć nowy projekt:


-   Wybrać polecenie menu *File-\>New-\>Project*.
-   W oknie dialogowym wybrać Console Application.
-   W kolejnym oknie dialogowym wybrać język programowania C.
-   W kolejnym oknie dialogowym wpisać tytuł projektu (np. `hello`), a
    następnie w katologu domowym utworzyć i wybrać folder `prm0`
    (przycisk po prawej stronie paska *Folder to create project in*).
-   W kolejnym oknie dialogowym usunąc domyślne ścieżki *"Debug"
    options* (pola *Output dir* i *Objects output dir* mają być puste)
    oraz wyłączyć *Create "Release" configuration*.

2 Rozwinąć w drzewie projektu pozycję *Sources* i otworzyć plik źródłowy `main.c`


3 Skompilować program i zaobserwować jego działanie (F9 albo polecenie *Build-\>Build and Run*).


4 Dodać na początku funkcji `main` (przed instrukcją `printf`) następując deklarację:

```
int dzien=10;
```

5 Dodać przed instrukcją `return` następującą instrukcję:

```
dzien++;
printf("Dzisiaj jest %d\n", dzien);
```

6 Skompilować program i zaobserwować jego działanie.

7 Ustawić pułapkę (ang. *Breakpoint*) na pierwszej instrukcji `printf` (*linia 7*) (F5 gdy kursor jest w linii, na której chcemy ustawić pułapkę, albo kliknięcie prawym klawiszem w tę linię i polecenie *Toggle breakpoint*)


8 Uruchomić ponownie program bez jego kompilacji (F8 albo polecenie *Debug-\>Start*). Zaobserwoać zmianę pasków narzędziowych.


9 Dodać podgląd wartości zmiennej `dzien` (kliknąć prawym klawiszem na definicje zmiennej i wybrać *Watch `dzien`\_, następnie wybrać polecenie menu *Debug-\>Debugging windows-\>Watches\_)


10 Przechodząc powoli przez kolejne linie programu (F7), obserwować:

-   informacje wypisywane w okienku terminala
-   informacje pojawiające się w zakładce *Debugger*
-   zmiany wartości zmiennej `dzien` w okienku *Watches*

## Zadanie 2. Kompilacja i uruchomienie programu z poziomu konsoli.

1 Otworzyć okienko konsoli.

2 Wypisać zawartośc bieżącego katalogu (polecenie `ls`).

3 Przejść do katalogu, w którym został stworzony projekt (polecenie `cd prm0`).

4 Ponownie wypisać zawartość katalogu (polecenie `ls -l`, opcja `-l` powoduje wypisanie dodatkowych informacji o plikach). Oprócz pliku `main.c` zawierający kod źródłowy programu, powinien tam się znajdować plik `hello`, oraz pliki stworzone przez środowisko *Code::Blocks* (`hello.cbp` i `hello.depend`).

5 Obejrzeć zawartość pliku `main.c` (polecenie `cat main.c`).

6 Usunąć plik `hello` (polecenie `rm hello`).

7 Skompilować program (polecenie `gcc main.c -o hello`).

8 Ponownie wypisać zawartość katalogu.

9 Uruchomić program (polecenie `./hello`).

10 Usunąć uprawnienie do wykonywania programu (polecenie `chmod -x hello`)

11 Spróbować ponownie uruchomić program

12 Ponownie wypisać zawartość katalogu (polecenie `ls -l`) i zobserwować, jak zmieniły się atrybuty pliku `hello`

--------------------

*Użyteczne polecnia konsoli:*


 - *ls* wypisanie zawartości bieżącego katalogu
 - *pwd* wypisanie nazwy bieżącego katalogu
 - *mkdir* *katalog* stworzenie nowego katalogu
 - *rmdir* *katalog* usuniecie katalogu
 - *cd* *katalog* przejście do katalogu
 - *touch* *plik* utworzenie pliku (lub zmiana daty modyfikacji na bieżącą, jeżeli plik istnieje)
 - *wget* *http://gdzies.pl/cos.txt* skopiowanie pliku *cos.txt* ze strony internetowej do bieżącego katalogu
 - *chmod u+x* *plik*  nadanie sobie uprawnień do wykonywania programu zawartego w plik| |`rm` *plik*| usunięcie pliku
 - *cat* *plik* wypisanie zawartości pliku
 - *more* *plik* wypisanie zawartości pliku (dobre dla dłuższych plików)|

Informacje na temat konkretnego polecenia można też uzyskać wypisując w
konsoli *man* *polecenie*.

*Obsługa kompilatora GCC z lini poleceń:*

 - `gcc plik.c -o program`  kompilacja pliku źródłowego *plik.c* do pliku wykonywalnego *program*
 - `gcc plik.c -o program -Wall` wyświetlanie wszystkich ostrzeżeń podczas kompilacji
 - `gcc plik.c -o program -std=C99` kompilacja z użyciem standardu C99 języka C (opcja zalecana)
 - `gcc -c plik.c -o plik.o`  kompilacja pliku źródłowego *plik.c* do pliku pośredniego *plik.o*
 - `gcc plik1.o plik2.o -o program` konsolidacja plików pośrednich *plik1.o* *plik2.o* do pliku wykonywalnego *program*
 - `gcc -g` dołączenie informacji niezbędnych dla procesu debugowania
 - `gcc -lm` dołączenie biblioteki matematycznej

