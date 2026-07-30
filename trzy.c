#include <stdio.h>

void slowo (int x);


int main(void)
{
    printf("Program wyswietla slowo - usmiech! tyle razy ile wpiszesz\nWpisz ile razy chcez wyswietlic to slowo\n");
    int liczba;
    scanf("%d", &liczba);
    printf("Uznales, ze tekst zostanie powtorzony %d razy oto on:\n", liczba);
    slowo(liczba);
    return 0;
    }
    
    void slowo (int x)
{
    for(int i =0; i <x ; i++)
    {
        printf("usmiech!\n");
    }
}

// jak zrobie void funckaj od inta 
// to mogę zoptymalizować kod bo funkcja nic nie zwraca tylko się wykonuje
