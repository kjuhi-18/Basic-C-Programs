#include<stdio.h>
#include<string.h>
int main(){

char str1[100],str2[100];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
int i=0,j=0,count=0,count1=0;/*
while(str1[i]!='\0')//without function
	{ count=count+1;
	i++;}
while(str2[j]!='\0')
	{ count1=count1+1;
	j++;}*/
count=strlen(str1);//using function
count1=strlen(str2);
if(count>count1){
printf("The longer string is %s",str1);}
else if(count<count1){
	printf("The longer string is %s",str2);}
else {
	printf("The strings are equal");}

return 0;
}
