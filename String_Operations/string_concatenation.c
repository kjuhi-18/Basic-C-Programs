#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100],a;
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
/*int i=0,j=0,count=0,count1=0;//without function
while(str1[i]!='\0')
	{ count=count+1;
	i++;}
while(str2[j]!='\0')
	{ count1=count1+1;
	j++;}
for(i=0,j=count;j<count+count1;j++){
	str1[j]=str2[i];
	i++;
}
str1[count+count1]='\0';
printf("The concatenated string is %s",str1);*/
strcat(str1,str2);//using function
printf("The concated string is %s",str1);
return 0;
}
