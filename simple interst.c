#include<stdio.h>
int main()
{
	float amt,rate,time,si;
	
	printf("enter the amount :");
	scanf("%f",&amt);
	printf("enter the rate :");
	scanf("%f",&rate);
	printf("enter the time :");
	scanf("%f",&time);
	si=(amt*rate*time)/100;
	printf("simple interest = %f",si);
	return 0;
}