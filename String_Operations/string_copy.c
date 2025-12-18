#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str2[10];
	int len,i=0,count=0;
	printf("Enter the string:");
	gets(str);
	/*while(str[i]!='\0'){//without using fucntion
		str2[i]=str[i];
		i++;}
		printf("The copied string is:%s",str2);*/
		strcpy(str2,str);//using fucntion
		printf("The copied string is %s",str2);
		return 0;}
