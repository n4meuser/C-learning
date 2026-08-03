#include <stdio.h>
    double wiekwsekundy(double x);

int main (void)
{
    printf("Zadanie 1\nPodanie kodu ACII i wyswietlenie litery\nUWAGA LITERYN OD 65 DO 90\n");
    int wartosc;
    scanf("%d", &wartosc);
    if(wartosc >= 65 && wartosc <= 90)
    {
        char znak = wartosc;
        printf("Twoja wartosc to %d a jej znak ASCII to litera %c\n", wartosc, znak);
    }
    else
    {
        printf("Nieprawidlowa wartosc\n");
        return 1;
    }
    
    printf("Zadanie 2\nPodaj swoj wiek a ja ci powiem ile sekund zyjesz\n");
    int wiek;
    scanf("%d", &wiek);
    printf("Zyjesz %.15lf sekund", wiekwsekundy(wiek));
        return 0;

    
}

    double wiekwsekundy(double x)
    {
        return x*3.156E7;
    }