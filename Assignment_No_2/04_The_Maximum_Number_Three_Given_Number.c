#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int No3 = 0;

    printf("\n Enter first Number : ");
    scanf("%d",&No1);

    printf("\n Enter Second Number : ");
    scanf("%d",&No2);

    printf("\n Enter Third Number : ");
    scanf("%d",&No3);

    if(No1 > No2)
    {
        printf("\n The Maximum 1st Number %d",No1);
    }
    else if(No2 > No3)
    {
        printf("\n The Maximum 2nd Number %d",No2);
    }
    else
    {
        printf("\n The Maximum 3rd Number %d",No3);
    }
    if(No1 == No2 && No2 == No3)
    {
        printf("\n The Equal Number :");
    }
    return 0;
}
