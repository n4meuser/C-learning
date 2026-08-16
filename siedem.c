#include <stdio.h>
#include <inttypes.h>
#include <string.h> // wymagane do strlen

void zadanie1(char x[40], char y[40]);
void zadanie2(char x[40]);
void zadanie3(char x[40], float y);

int main(void)

{
    
    int wybor;
    do 
    {
        
    printf("Program wykonuje zadania z ksiazki\n0. Wyjscie\n1. Program pyta o imie a potem o nazwisko i je wyswietla\n2. W rozny sposob formatuje podane imie\n3. Wyswietla podane imie i wzrost w zaokragleniu do dwoch liczb po przecinku (dla cm)\n");
     scanf("%d", &wybor);
     switch(wybor)
     {
        case 1: 
        {
        printf("Zadanie 1\n");
        char imie[40], nazwisko[40];
        printf("Wpisz imie\n");
        scanf("%s", imie);
        printf("Wpisz nazwisko'\n");
        scanf("%s", nazwisko);
        zadanie1(imie, nazwisko);
        break;
        }
        
        case 2: 
        {
            printf("Podaj imie a twoje imie bedzie\n-Wyswietlone w cudzyslowie\n-Wyswietla je w polu o szerokosci 20 znakow po prawej stronie\n-Wyswietla je w polu o szerokosci 20 znako po lewej stronie\n-W polu o trzy jednostki wiekszym niz podane imie\nWprowadz imie\n");
            char imie[40];
            scanf("%s", imie);
            zadanie2(imie);
            break;
        }
        
        case 3: 
        {
            printf("Podaj imie\n");
            char imie[40];
            scanf("%s", imie);
            printf("podaj wzrost");
            float wzorst;
            scanf("%f", &wzorst);
            zadanie3(imie, wzorst);
            break;
        }
     }
    }while(wybor!=0);
    
    return 0;
}

void zadanie1(char x[40], char y[40])
{
 printf("Twoje imie to %s a nazwisko to %s\n", x, y);
}

void zadanie2(char x[40])
{
    int plus3;
    plus3 = strlen(x)+3;
    printf("Twoje imie to \"%s\"\n", x);
    printf("Twoje imie to \"%20s\"\n", x);
    printf("Twoje imie to \"%-20s\"\n", x);
    printf("Twoje imie to \"%*s\"\n", plus3, x);
    // ("tekst %*lancuch", dlugosc lancuch, zmienna dla %d)
}

void zadanie3(char x[40], float y)
{
    printf("Twoje imie to %s i masz %.2f cm wzrostu'\n", x, y);
}

