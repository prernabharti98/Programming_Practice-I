#include<stdio.h>
#include<math.h>
int main()
{
	int N,i=2,min,max,num;
	double sd,sum_squares=0.0,sum=0.0,avg;
	printf("Enter value of N: ");
	scanf("%d",&N);
	printf("Enter a number: ");
	scanf("%d",&num);
	max=num;
	min=num;
	sum+=num;
	sum_squares+=pow(num,2);
	while(i<=N){
		printf("Enter a number: ");
		scanf("%d",&num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
		sum+=num;
		sum_squares+=pow(num,2);
		i++;
	}
	avg=sum/N;
	sd=sqrt((sum_squares/N)-pow(avg,2));
	printf("Range of values=%d-%d\nStandard deviation=%.2f",min,max,sd);
	return 0;
}
