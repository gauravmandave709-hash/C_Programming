#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int No3 = 0;
    int Temp = 0;

    printf("\n Enter A Number1 : ");
    scanf("%d",&No1);
    printf("\n Enter A Number2 : ");
    scanf("%d",&No2);
    printf("\n Enter A Number3 : ");
    scanf("%d",&No3);

    Temp = No1;
    No1 = No2;
    No2 = No3;
    No3 = Temp;

    printf("\n Swapping A 1st Number %d",No1);
    printf("\n swapping A 2nd Number %d",No2);
    printf("\n Swapping A 3rd Number %d",No3);

    return 0;
}
