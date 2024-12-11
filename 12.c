#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	
	printf("enter the a :");
	scanf("%d",&a);
	
		printf("enter the b :");
	scanf("%d",&b);
	
		printf("enter the c :");
	scanf("%d",&c);
	
		printf("enter the d :");
	scanf("%d",&d);
	
	if(a<=b)
	{
		printf("a is min");
		
		if (b<=c)
		{
			printf("b is min");
			
		}
		if (c<=d)
		{
			printf("c is min");
			
		}
		if (d<=a)
		{
			printf("d is min");
		}
		else
		{
			printf("the min num is %d :",a,b,c,d);
		}
		
			
		
	}
}
