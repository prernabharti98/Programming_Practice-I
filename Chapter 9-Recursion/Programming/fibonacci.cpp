/*
* Computes the nth Fibonacci number
*/

#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n,f;
	printf("Enter value of n\n");
	scanf("%d",&n);
	f=fibonacci(n);
	printf("%dth fibonacci number is %d",n,f);
	return 0;
}
int fibonacci(int n)
{
	int f;
	if(n==1||n==2)
		f=1;
	else
		f=fibonacci(n-2)+fibonacci(n-1);
	return f;
}
