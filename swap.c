#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter the values of X and Y\n");
	scanf("%d%d",&x,&y);
	printf("Before swapping\n X=%d \nY=%d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping\n X=%d\n Y=%d\n",x,y);
}