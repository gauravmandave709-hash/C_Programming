#include<stdio.h>
#include<conio.h>

int main ()
{
    int No = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&No);

    if(No % 5 == 0 && No % 7 == 0)
    {
        printf("\n %d Divisble by 5 and 7",No);
    }
    else if(No % 5 == 0)
    {
        printf("\n %d Divisble By 5 ",No);
    }
     else if(No % 7 == 0)
    {
        printf("\n %d Divisble By 7 ",No);
    }
    else
    {
        printf("\n %d not Divisble by 5 and 7",No);
    }
    return 0;
}
