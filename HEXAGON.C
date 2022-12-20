#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,n,a;
 clrscr();
 printf("enter n vale:");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {   a=1;
  for (j=1;j<=n-i;j++)
  {
   printf(" ");
   }
   for (k=1;k<=2*i-1;k++)
   { printf("%d",a);
   a++;
   }
   printf("\n");
   }
   for (i=n-1;i>0;i--)
   {
   a=1;
    for (j=1;j<=n-i;j++)
    {
     printf(" ");
     }
     for (k=1;k<=2*i-1;k++)
     {
      printf("%d",a);
      a++;
      }
      printf("\n");
      }
      getch();
      }
