#include <stdio.h>
#include <string.h>

float pobieranie(float x, float y);
void zuzyciepaliwa(float x, float y);

int main(void)
{
    unsigned int wybor;
    do 
    {
        printf("0. wyjsci\n1. Predkosc pobierania\n2. Liczba znakow imienia i nazwiska\n3. Mile/galony i liry/100km\n");
        scanf("%d", &wybor);
        switch(wybor)
        {
            case 1:
            {
                float plik, predkosc;
                printf("Program ma za zadanie obliczyć prędkość pobierania pliku (w megabajtach) na podstawie prędkości (w megabitach)\n");
                printf("Wpisz rozmiar pliku\n");
                scanf("%f", &plik);
                printf("Wpisz predkosc pobierania\n");
                scanf("%f", &predkosc);
                printf("Twoj plik o rozmiarze %f przy prekosci %f bedzie pobierac sie %.2f\n", plik, predkosc,pobieranie(plik,predkosc));
                break;
                
            }
            
            case 2: 
            {
                char imie[40];
                char nazwisko[40];
                printf("Program podaje liczbe znakow dla imienia i nazwiska\nUWAGA - maks 39 znakow moze liczyc wpisane slowo!\n");
                printf("Podaj swoje imie\n");
                scanf("%s", imie);
                printf("Wpisz swoje nazwisko\n");
                scanf("%s", nazwisko);
                printf("%s %s\n", imie, nazwisko);
                printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));
                printf("Drugi rodzaj formatowania - do lewej\n");
                printf("%s %s\n", imie, nazwisko);                
                printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));
                break;
                
            }
            
            case 3: 
            {
                float mile, galony;
                printf("Program wyswiela na poczatku wartosci w milach/galony a potem konwwertuje to na litr/100km\nWpisz ile mili chcesz przejechac\n");
                scanf("%f", &mile);
                printf("Ile masz galonow paliwa\n");
                scanf("%f", &galony);
                zuzyciepaliwa(mile, galony);
            }
        }
    }while(wybor!=0);
    return 0;
}

// funkcje
float pobieranie(float x, float y)
{
    return ((x)/(y))*8;
}

void zuzyciepaliwa(float x, float y)
{
    printf("Twoje zuzycie paliwa to %.2f [mile/galon]\n", x/y);
    printf("Twoje zuzyie paliwa to %.2f [litr/100km]\n", (y*3.785)/(x*1.609)*100);
}

