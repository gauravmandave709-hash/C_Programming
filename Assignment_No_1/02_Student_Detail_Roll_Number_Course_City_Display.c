#include<stdio.h>
#include<conio.h>

int main ()
{
    char Name [50] = "";
    char No [9] = "";
    char Course [8] = "";
    char City [10] = "";

    printf("\n Enter Student Name : ");
    gets(Name);
    printf("\n Enter Roll Number : ");
    gets(No);
    printf("\n Enter course : ");
    gets(Course);
    printf("\n Enter city : ");
    gets(City);

    printf("\n Student Name %s",Name);
    printf("\n Roll Number %s",No);
    printf("\n Course %s",Course);
    printf("\n City %s",City);

    return 0;
}
