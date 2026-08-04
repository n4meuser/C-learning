#include <stdio.h>
#include <inttypes.h> // umozliwia uzywanie unita o 8 bitach

int tekst();
double czasteczki(unsigned int x);
float cmwcale(float x);
float calewcm(int x);

int main(void)
{    
    uint8_t opcja;
    
    do 
    {
    printf("Wybierz opcje\n0. Wyjscie\n1. sygnal dziwekowy i testk\n2. Podanie ilosci czasteczek w n litrach wody\n3. Przeksztalcenie wzrostu w calach w centymetry i z centymetrow w cale\n");
    
    scanf("%hhu", &opcja);
        
    switch(opcja)
    {
        case 1:
        {
            tekst();
            break;
        }
        
        case 2: 
        {
            printf("Wpisz liczbe litrow wody dla ktorych chcesz obliczyc liczbe czasteczek\n");
            unsigned int n;
            scanf("%u", &n); // samo %u to unsinged, automatycznie jest to dla inta
                            // %h.. to jest polowa czyli np. polowa z inta to short
                            // %l.. o polowe wiekszu od inta czyli long
            printf("Liczba czasteczek w %u wody wynosi %.0lf\n czasteczek", n, czasteczki(n));
            
            break;
        }
        
        case 3: 
        {
            printf("Wybierz opcje\n0. wyjscie\n1. cm w cale\n2. cale w cm\n");
            
            uint8_t wybor;
            scanf("%hhu", &wybor);
            if(wybor==1)
            {
                // cm -> cale
                printf("Podaj swoj wzrost w cm");
                float cm;
                printf("Podaj swoj wzrost w cm\n");
                scanf("%f",&cm);
                printf("Twoj wzrost w %f cm wynosi %f cali", cm, cmwcale(cm));
            }
            
            if(wybor==2)
            {
                // cale -> cm
                printf("Podaj swoj wzrost w calach");
                int cale;
                scanf("%d", &cale);
                printf("Twoj wzrost w calach wynosi %d i jest to %f cm", cale, calewcm(cale));
                
            }
            if(wybor==0 || wybor > 2)
            {
                printf("Program zakonczyl dzialanie, powrot do menu");
                break;
            }
            
        }
        
    }
    }while(opcja !=0);
    // zeby menu dzialo PRZED do musze wyznaczyc argument while
    // int xyz;
    // do
    // {
    // scantf(xyz)
    // }while(xyz)
    // po break bedzie wracac do menu, zeby pobrac inta 
    
    printf("Program konczy swoje dzialanie\n");
    
    return 0;
}

int tekst()
{
    return printf("\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"");
}

double czasteczki(unsigned int x)
{
    return (x * 1000.0) / 3.0E-23;;
}

float cmwcale(float x)
{
    return x*100/254.0f; // zeby nie uciac ulamkow nalezy dodac .0f
}

float calewcm(int x)
{
    return x*2.54;
}
