#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the calue of B:");
	scanf("%d",&b);
	printf("Before swapping:a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping:a=%d b%d\n",a,b);
}