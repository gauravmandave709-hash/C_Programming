#include<stdio.h>
#include<conio.h>

int main ()
{
    int No = 0;

    printf("\n Enter A number :");
    scanf("%d",&No);

    if(No % 7 == 0)
    {
        printf("\n %d Divisble By 7 ",No);
    }
    else
    {
        printf("\n %d Not Divsible by 7 ",No);
    }
    return 0;
}
