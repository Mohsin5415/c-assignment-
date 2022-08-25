#include<stdio.h>
int main()
{
int nd,y,w,d;

printf("enter the total days");
scanf("%d",&nd);
y=nd/365;
w=(nd%365)/7;
d=(nd%365)%7;
printf("%d = %d years %d weeks %d days\n",nd,y,w,d);
return 0;

}