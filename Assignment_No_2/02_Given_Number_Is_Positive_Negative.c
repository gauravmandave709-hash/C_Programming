#include<stdio.h>
#include<conio.h>

int main ()
{
    int No = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\n Number is positive %d",No);
    }
    if(No < 0)
    {
        printf("\n Number Is Negative %d",No);
    }
    else if(No == 0)
    {
        printf("\n Number Is Netural %d",No);
    }
    return 0;
}
