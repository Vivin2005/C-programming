#include<stdio.h>
int main()
{
	int num,firnum,lastnum,sum;
	printf("Enter any four number:");
	scanf("%d",&num);
	firnum=num/ 1000;
	lastnum=num % 10;
	sum=firnum+lastnum;
	printf("\nThe sum of first and last number is %d\n",sum);
}