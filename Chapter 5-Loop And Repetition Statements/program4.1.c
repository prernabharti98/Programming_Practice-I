#include<stdio.h>
int main()
{
	int N,i=2,num,max,min;
	double sum=0.0,avg;
	printf("Enter the value of N:");
	scanf("%d",&N);
	printf("Enter a number:");
	scanf("%d",&num);
	max=num;
	min=num;
	sum+=num;
	while(i<=N){
		printf("Enter a number:");
		scanf("%d",&num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
		sum+=num;
		i++;
	}
	avg=sum/N;
	printf("Smallest number=%d\nLargest number=%d\nAverage value=%.2f",min,max,avg);
	return 0;
}
