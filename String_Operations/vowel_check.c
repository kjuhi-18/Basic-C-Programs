#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int len,i=0,count=0,count1=0;
	printf("Enter the string:");
	gets(str);
	while(str[i]!='\0'){//without using function
	if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
	{ count=count+1;}
	i++;}
	printf("The number of vowels in %s are:%d \n",str,count);
	char vowels[]="aeiouAEIOU";//using functions
	for(i=0;i<strlen(str);i++){
	if(strchr(vowels,str[i]))
	{count1++;}}
	printf("The number of vowels in %s are:%d",str,count1);
	return 0;}
