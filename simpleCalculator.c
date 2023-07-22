#include<stdio.h>
void main()
{
	int num1,num2;
	char op;
	
	printf("ENTER FIRST NUM:");
	scanf("%d",&num1);
	
	printf("ENTER SECOND NUMBER:");
	scanf("%d",&num2);
	
	printf("ENTER THE OPERATOR:");
	scanf("\n%c",&op);
	
	if(op=='+')
	{
		printf("THE SUM=%d",num1+num2);
	}
	
	else if(op=='-')
	{
		printf("THE SUB=%d",num1-num2);
	}
	
	else if(op=='*')
	{
		printf("THE MUL=%d",num1*num2);
	}
	
	else if(op=='/')
	{
		printf("THE DIV=%d",num1/num2);
	}
	
	else if(op=='%')
	{
		printf("THE MODU=%d",num1%num2);
	}
	
	else
	{
		printf("'INVALID OPERATOR'");
	}
}