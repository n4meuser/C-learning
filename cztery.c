#include <stdio.h>
// PROTOTYPY
// jesli umieszcze informacje o funkcji na samej gorze mogę robić maina pod nimi a kod samej funkcji wrzucić na dol
int dodawanie(int x, int y);
int odejmowanie(int x, int y);


int main(void)
{
    printf("Program wykonuje dodawanie albo odejmowanie\nDodawanie - 1\nOdejmowanie - 2\n");
    printf("Wpisz dwie liczby\n");
    int jeden, dwa, wybor;
    scanf("%d", &jeden);
    scanf("%d", &dwa);
    printf("Którą opcje wybierasz?");
    scanf("%d", &wybor);
    switch(wybor)
{
    case 1: 
    {
        printf("Dodawanie %d\n", dodawanie(jeden, dwa));
        break;
    }
    
    case 2: 
    {
        printf("Odejmowanie %d\n", odejmowanie(jeden, dwa));
        break;
    }
    default: 
    {
        printf("Nieprawidlowa opcja\n");
        break;
    }
}
}

// funkcje
int dodawanie(int x, int y)
{
    return x+y;
}
int odejmowanie(int x, int y)
{
    return x-y;
}
// funkcje



