#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number = ");
	scanf("%d",&num);
	if(num%2==0)
		printf("This number is even number");
	else
		printf("This number is odd number");
	return 0;
}