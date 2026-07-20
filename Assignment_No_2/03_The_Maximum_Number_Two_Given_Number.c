 #include<stdio.h>
 #include<conio.h>

 int main ()
 {
     int No1 = 0;
     int No2 = 0;

     printf("\n Enter First Number : ");
     scanf("%d",&No1);

     printf("\n Enter Seccond Number : ");
     scanf("%d",&No2);

      if(No1 > No2)
     {
         printf("\n 1st Number Maximum");
     }
     else if(No1 == No2)
     {
         printf("\n The Number Is Zero");
     }
     else
     {
         printf("\n 2nd Number Maximum");
     }
     return 0;
 }


