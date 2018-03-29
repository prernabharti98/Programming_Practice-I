/*
* Form a string containing all capital letters found in another string
*/

#include<stdio.h>
char * capital(char *caps,const char *string);
int main()
{
	char *c;
	char string[50],caps[50]="";
	printf("Enter a string\n");
	gets(string);
	c=capital(caps,string);
	printf("String of all capital letters is as follows:\n");
	printf("%s",c);
	return 0;
}
char * capital(char *caps,const char *string)
{
	char restcaps[50];
	if(string[0]=='\0')
		caps[0]='\0';
	else{
		if((string[0])>=65 && string[0]<=96)
			sprintf(caps, "%c%s", string[0],capital(restcaps,&string[1]));
		else
			capital(caps,&string[1]);
	}
	return caps;
}
