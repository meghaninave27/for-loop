//break
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		if(i>=30)
		{
			break;
		}
		
	}
}
