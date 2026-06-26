#include<stdio.h>

int main ()
{
    float Eng = 0;
    float Phy = 0;
    float Math = 0;
    float Total = 0;
    float Per = 0;

    printf("\n Enter English Marks : ");
    scanf("%f",&Eng);
    printf("\n Enter Physic Marks : ");
    scanf("%f",&Phy);
    printf("\n Enter Maths Marks : ");
    scanf("%f",&Math);

    Total = Eng + Phy + Math;

    Per = (Total / 300 )* 100;

    printf("\n Total %.2f",Total);

    printf("\n Percentage %.2f",Per);

    return 0;
}
