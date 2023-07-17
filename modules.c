#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two values\n");
	scanf("%d\n%d",&a,&b);
	c=a%b;
	printf("The module of the number is %d",c);
}