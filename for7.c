//goto
#include<stdio.h>
#include<Conio.h>
int main()
{
	printf("line1\n");
	goto start;
	
	start:
	printf("line3\n");
	goto s2;
	printf("line2\n");
}
	
