#include<stdio.h>
#include<conio.h>

int main ()
{
    int No = 0;

    printf("\n Enter A Number ");
    scanf("%d",&No);

    (No % 2 == 0 )? printf("\n Even Number "):(No == 2)? printf("\n Equal number"): printf("\n Odd Number ");

    return 0;
}
