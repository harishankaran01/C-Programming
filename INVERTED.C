#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for (i=n;i>0;i--)
 {
  for (j=1;j<=n-i;j++)
  {
   printf(" ");
   }
   for (k=1;k<=2*i-1;k++)
   {
    printf("*");
    }
     printf("\n");
     }
     getch();
     }