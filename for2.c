//Write a Program to print the factorial of number N using a for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,f=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("f is %d",f);
	
}
