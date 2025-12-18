#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	int len,i=0,count=0;
	printf("Enter the string:");
	gets(str1);
	len=strlen(str1);//using fuction
	printf("The length of string is:%d\n",len);
	printf("__________________________\n");
	while(str1[i]!='\0')//without built in function
	{ count=count+1;
	i++;}
	printf("The length is:%d",count);
	return 0;
	
	
	
	}
