#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter A Leap Year :");
    scanf("%d",&No);

    if(No % 4 == 0)
    {
        printf("\n This Is Leaf Year :");
    }
    else
    {
        printf("\n This is Not Leaf Year :");
    }
    return 0;
}
