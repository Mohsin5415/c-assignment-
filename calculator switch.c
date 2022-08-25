#include<stdio.h>
int main()
{
	char choice;
	int num1,num2;
	printf("enter your choice : ");
	scanf("%c",&choice);
	printf("enter two integer numbers :");
	scanf("%d %d",&num1,&num2);
	switch(choice)
	{
		case '+' :printf("sum of %d and %d = %d",num1,num2,num1+num2);
		break;
		case '-' :printf("subtraction of %d and %d=%d",num1,num2,num1-num2);
		break;
		case '*' :printf("multiplication of %d and %d =%d",num1,num2,num1*num2);
		break;
		case '/' :printf("divison of %d and %d=%d",num1,num2,num1/num2);
		break;
		case '%' :printf("mod of %d and %d = %d",num1,num2,num1%num2);
		break;
		default:
			printf("invalid choice...!");
	}
	return 0;
}