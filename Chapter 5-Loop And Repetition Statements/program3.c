#include<stdio.h>
#include<math.h>
int main()
{
	FILE *ptr;
	ptr=fopen("loan_amortization_table","w");
	double principal,annual_interest,payment,monthly_interest,balance,interest,principal1,principal2;
	int n,i;
	printf("Enter the amount borrowed(principal),annual interest rate and number of payments\n");
	scanf("%lf %lf %d",&principal,&annual_interest,&n);
	monthly_interest=annual_interest/1200.0;
	payment=(monthly_interest*principal)/(1-pow(1+monthly_interest,-n));
	fprintf(ptr,"Principal %8c $%.2f %6c Payment %8c $%.2f\n",' ',principal,' ',' ',payment);
	fprintf(ptr,"Annual interest %5c %.1f%% %8c Term %8c %d months\n\n",' ',annual_interest,' ',' ',n);
	fprintf(ptr,"Payment %9c Interest %8c Principal %8c Principal\n");
	fprintf(ptr,"Balance\n");
	fprintf(ptr,"_______________________________________________________________________________\n");
	principal2=principal;
	for(i=1;i<=n;i++){
		interest=monthly_interest*principal2;
		principal1=payment-interest;
		principal2-=principal1;
		fprintf(ptr,"%d %16c %.2f %10c %.2f %10c %.2f\n",i,' ',interest,' ',principal1,' ',principal2);
	}
	fprintf(ptr,"Final payment %6c $%.2f\n",' ',principal1+interest);
	fprintf(ptr,"_______________________________________________________________________________\n");
	return 0;
}
