#include<stdio.h>
int main()
{
    int No1 = 0;
    int No2 = 0;
    int Temp = 0;

    printf("\n Enter A Number1 : ");
    scanf("%d",&No1);

    printf("\n Enter A Number 2: ");
    scanf("%d",&No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n Swapping 1st Number %d",No1);
    printf("\n Swapping 2nt Number %d",No2);

    return 0;
}
