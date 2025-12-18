#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str[23];
	int len,i=0,j=0;
	printf("Enter the string:");
	gets(str1);
	while(str1[i]!='\0'){//without using function
		len=len+1;
	i++;}
	for(i=len-1;i>=0;i--){
		str[j]=str1[i];
		j++;
	}
	printf("The reversed string of %s is %s",str1,str);
	printf("The reverse of %s is %s ",str1,strrev(str1));//with using function
	return 0;}
