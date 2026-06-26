#include<stdio.h>
#include<conio.h>

int main ()
{
    float Side = 0;
    float Area = 0;

    printf("\n Enter A Side : ");
    scanf("%f",&Side);

    Area = Side * Side;

    printf("\n Area Of Square %.2f",Area);

    return 0;
}
