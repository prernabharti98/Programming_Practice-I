/*
* Displays the greatest common divisor of two integers
*/

#include<stdio.h>
int gcd(int m,int n);
int main()
{
	int m,n;
	printf("Enter two numbers\n");
	scanf("%d %d",&m,&n);
	printf("GCD of %d and %d is %d",m,n,gcd(m,n));
	return 0;
}
int gcd(int m,int n)
{
	int g;
	if(m%n==0)
		g=n;
	else
		g=gcd(n,m%n);
	return g;
}
