#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the integer: ");
	scanf("%d",&num);
	if (num<0)
	printf("negative number");
	else if(num>0)
	printf("positive number");
	else
	printf("zero");
	return 0;
}
