#include<stdio.h>
#include<conio.h>

int main ()
{
    int No = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&No);

    if(No == 1)
    {
        printf("\n Monday",No);
    }
     else if(No == 2)
    {
        printf("\n Tuesday",No);
    }
    else if(No == 3)
    {
        printf("\n Wednesday",No);
    }
    else if(No == 4)
    {
        printf("\n Thursday",No);
    }
    else if(No == 5)
    {
        printf("\n Friady",No);
    }
    else if(No == 6)
    {
        printf("\n Saturday",No);
    }
    else if(No == 7)
    {
        printf("\n This Number Is Sunday",No);
    }
    else
    {
        printf("\n Invaid Number",No);
    }


    return 0;
}
