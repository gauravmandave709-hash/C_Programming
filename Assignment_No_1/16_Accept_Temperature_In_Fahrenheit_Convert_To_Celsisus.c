#include<stdio.h>
#include<conio.h>

int main()
{
    float Fahrenheit = 0;
    float Celsisus = 0;

    printf("\n Enter Temperature in Fahrenheit : ");
    scanf("%f",&Fahrenheit);

    Celsisus = (Fahrenheit-32) * (5.0/9.0);

     printf("\n Celsisus %.2f",Celsisus);

     return 0;
}
