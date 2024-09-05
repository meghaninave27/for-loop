//Write a Program to print the sum of all numbers from 1 to N using a for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("sum is %d",sum);
}
