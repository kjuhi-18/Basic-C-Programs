#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
int i=0,j=0,count=0,count1=0;
while(str2[i]!='\0')//without built in function
{ count1=count1+1;
i++;}
int countss=0;
int countsss=0;
for(i=0;str1[i]!='\0';i++){
for(j=0;j<count1;j++){
if(str1[i+j]==str2[j]){countss++; }						
}
if(countss==count1){
countsss++;}
countss=0;
}
printf("Substring occured %d times\n",countsss);
return 0;}

