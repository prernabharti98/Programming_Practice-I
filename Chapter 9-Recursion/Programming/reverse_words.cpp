/*
* Take n words as input and print them in reverse order on separate lines.
*/

#include<stdio.h>
void reverse(int n);
int main()
{
	int n;
	printf("Enter number of words to be entered by user\n");
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	char word[15];
	if(n==1){
		scanf("%s",word);
		printf("\n%s",word);
	}
	else{
		scanf("%s",word);
		reverse(n-1);
		printf("\n%s",word);
	}
}
