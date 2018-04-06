#include<stdio.h>
int main()
{
	char digit;
	int digit_value,sum=0;
	printf("Enter a number to check divisibility by 9: ");
	scanf(" %c", &digit);
	while(digit!='\n'){
		digit_value=(int)digit-(int)'0';
		sum+=digit_value;
		printf("%d\n",digit_value);
		scanf("%c", &digit);
	}
	if(sum%9==0)
		printf("Number is divisible by 9");
	else
		printf("Number is not divisible by 9");
	return 0;
}
