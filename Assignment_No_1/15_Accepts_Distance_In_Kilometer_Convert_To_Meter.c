#include<stdio.h>
#include<conio.h>

int main ()
{
    float Km = 0;
    float Meter = 0;

    printf("\n Enter A Distance Kilometer : ");
    scanf("%f",&Km);

    Meter = 1000 * Km;

    printf("\n Distance Meter %f",Meter);

    return 0;
}
