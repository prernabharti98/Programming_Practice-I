/*
* Counting occurrences of a letter in a string
*/

#include<stdio.h>
int count(const char *str,char target);
int main()
{
	char string[20],target;
	int c;
	printf("Enter a string\n");
	gets(string);
	printf("Enter letter to search in the string\n");
	scanf(" %c", &target);
	c=count(string, target);
	printf("No. of occurrences of %c in %s is %d times",target,string,c);
	return 0;
}
int count(const char *str,char target)
{
	int c;
	if(str[0]=='\0')
		c=0;
	else if(target==str[0])
		c=1+count(&str[1],target);
	else
		c=count(&str[1],target);
	return c;
}
