#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter cost price Rs. ");
	scanf("%d",&cp);
	printf("Enter selling price Rs. ");
	scanf("%d",&sp);
	if(sp>cp)
	{
		profit = sp - cp;
		printf("profit= Rs. %d",profit);
	}
	else
	{
		loss = cp - sp;
		printf("loss= Rs. %d",loss);
	}
	return 0;
}