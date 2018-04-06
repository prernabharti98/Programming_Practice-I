#include<stdio.h>
int main()
{
	int n,x,r,sum=0;
	printf("Enter a number to check divisibility by 9:");
	scanf("%d",&n);
	x=n;
	printf("Digits starting from right are as follows:\n");
	while(x>0){
		r=x%10;
		sum+=r;
		printf("%d\n",r);
		x/=10;
	}
	if(sum%9==0)
		printf("Number %d is divisible by 9",n);
	else
		printf("Number %d is not divisible by 9",n);
	return 0;
}
