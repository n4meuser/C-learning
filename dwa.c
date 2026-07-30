#include <stdio.h>
int szescian (int x, int y);
int kwadrat (int x);
int razydwa (int x);

int main(void)
{
    int zmienna = 10;
    int kwadrad = kwadrat(zmienna);
    printf("to jest %d do kwadratu %d\n", zmienna, kwadrad);
    printf("to jest %d razy dwa %d\n", zmienna, razydwa(zmienna));
    printf("to jest %d do szescianu %d\n", zmienna, szescian(kwadrad,zmienna ));
}

int kwadrat (int x)
{
    return x*x;
}

int razydwa (int x)
{
    return x*2;
}

int szescian (int x, int y)
{
    return x*y;
}
