#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
printf("Enter the first string:");
gets(str1);
int i,j=0,count=0,count1=0;
while(str1[i]!='\0')//without function
	{ count=count+1;
	i++;}
	j=0;
	count=strlen(str1);//with function
	strcpy(str2,str1);
	strrev(str2);
	
/*for(i=count-1;i>=0;i--){

str2[j]=str1[i];
j++;}*/

i=0,j=0;
for(i=0;i<count;i++){

if(str2[j]==str1[i]){

j++;
count1++;}}
if(count1==count){printf("Palindrome!!!");
}
else{printf("Not a palindrome");

}
return 0;
}
 

