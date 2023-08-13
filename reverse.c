#include<stdio.h>
int main()
{
	int num,r,rev,temp;
	printf("Enter a number's:");
	scanf("%d",&num);
     temp=num;
     while(num>0)
     {
     	r=num%10;
     	rev=rev*10+r;
     	num=num/10;
     }
printf("The reverse of a number %d is=%d",temp,rev);
}