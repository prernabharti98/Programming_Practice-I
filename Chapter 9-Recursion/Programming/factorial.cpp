/*
* Compute n! using a recursive definition
*/

#include<stdio.h>
int factorial(int n);
int main()
{
	int fact,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d!=%d",n,fact);
	return 0;
}
int factorial(int n)
{
	int fact;
	if(n==0)
		fact=1;
	else
		fact=n*factorial(n-1);
	return fact;
}
