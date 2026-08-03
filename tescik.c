#include <stdio.h>
#include <stdint.h>
// umozliwia towrzeni n bitowych zmiennych
int main(void)
{
    char A = 'A';
    
    printf("To jest A jako %d \"%%d\"\nqTo jest jako %c \"%%c\"\n", A+1, A+1);    
    // %%d w cuddzysłowiu daje mozliwosc dania %
    // %s to tablica znakow, po dodaniu czegos program sie zawiesza
    // sluzy napisa
    // %d to liczba dla A to 65, zatem A+1 to 66
    // %c to znak, zatem dla 65 to A
    // dla 66 to B    
    
    printf("testowanie inta 8 bitowego\n");
    uint8_t B=255;
    uint8_t C=256;
    printf("Maksymalna wartosc inta dla 8 bitow %d\n Maks+1 (jako oddzielna zmienna) %d\nKiedy dam B+1 w printf (funkcji) to kompilator traktuje to jako 32 bitowa i poszerza zakres %d", B, C, B+11);
    
    // kiedy wychodzi poza zakres zeruje się i przechodzi w 
    
    return 0;
}
