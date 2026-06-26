#include<stdio.h>
int main()
{
    float Radii = 0;
    float Area = 0;
    const Pi = 3.14;

    printf("\n Enter Of Radius : ");
    scanf("%f",&Radii);

    Area = Pi * Radii * Radii ;

    printf("\n Area Value %.2f",Area);

    return 0;
}

