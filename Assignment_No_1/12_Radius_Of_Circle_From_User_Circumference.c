#include<stdio.h>
#include<conio.h>

int main ()
{
    float Radii = 0.0;
    const Pi = 3.14 ;
    float Circumference = 0.0;

    printf("\n Enter A Radius : ");
    scanf("%f",&Radii);

    Circumference = 2 * Pi * Radii ;

    printf("\n Radius Value %f",Circumference);

    return 0;
}
