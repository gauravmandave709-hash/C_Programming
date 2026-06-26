#include<stdio.h>
#include<conio.h>

int main()
{
    float Width = 0;
    float Height = 0;
    float Area = 0 ;

    printf("\n Enter A Width : ");
    scanf("%f",&Width);
    printf("\n Enter A Height : ");
    scanf("%f",&Height);

    Area = Width * Height;

    printf("\n Rectangle For Area %.2f",Area);

    return 0;
}
