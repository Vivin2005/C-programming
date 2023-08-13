#include<stdio.h>
int main()
{
	int r;
	float PI=3.14,area,cir;
	printf("\nEnter the radius of circle:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("\nArea of circle is:%f",area);
	cir=2*PI*r;
	printf("\nCircumferance is:%f",cir);
}