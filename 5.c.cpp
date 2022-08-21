#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("Enter value of p");
	scanf("%d",&p);
	printf("\n Enter value of n");
	scanf("%d",&n);
	printf("Enter value of r");
	scanf("%f",&r);
	si=p*n*r/100;
	printf("%f",si);
	return 0;
}