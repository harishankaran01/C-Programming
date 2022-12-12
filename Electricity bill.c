#include<stdio.h>
#include<conio.h>
struct electric
{
	char name[25];
	int id;
	float rate,units;
}a;
void main()
{

	int i;
	do
	{
		printf("\nEnter the name:");
		scanf("%s",a.name);
		printf("\nEnter  Id Number");
		scanf("%d",&a.id);
		printf("\nEnter the no. of units consumed:");
		scanf("%f",&a.units);
		printf("\n");
		
		if(a.units<=100)
			a.rate=(a.units*1.50);
		else if(a.units>100 && a.units<=200)
		    a.rate=(a.units*1.80);
		else if( a.units>200 && a.units<=300)
		    a.rate=(a.units*2.00);
		else if(a.units>300)
		    a.rate=(a.units*2.50);
		
		if(a.rate<300)
		   a.rate=a.rate+50;
		else if(a.rate>300)
		   a.rate=a.rate+(a.rate*0.15);
		
		printf("\n Name:%s",a.name);
		printf("\n Id Number:%d",a.id);
		printf("\n Number of units consumed:%f",a.units);
		printf("\n Amount:%f",a.rate);
		printf("\nEnter 1 to exit or Enter any key to continue...");
		printf("\nEnter your choice:");
		scanf("%d",&i);
	}while(i!=1);
	getch();
}
