#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the calue of B:");
	scanf("%d",&b);
	printf("Before swapping:a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping:a=%d b%d\n",a,b);
}