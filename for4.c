//Write a Program to print the multiplication table of the number N using any type of loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,mul=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d * %d = %d\n",n,i,mul);
	
	}

}

