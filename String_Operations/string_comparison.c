#include<stdio.h>
#include<string.h>
int main(){

char str1[100],str2[100],a;
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
int i=0,j=0,count=0,count1=0,flag=1,c;
while(str1[i]!='\0')//WITHOUT FUCNTION
	{ count=count+1;
	i++;}
while(str2[j]!='\0')
	{ count1=count1+1;
	j++;} 
if(count!=count1)
{flag=0;
}
else if(count==count1)
{
	for(i=0;i<count;i++)
	{if(str1[i]==str2[i]){
		continue;
		
	}
	else{flag=0;break;}
	}
	}
if(flag==0)
{printf("Strings Are not equal\n");
}
else if(flag==1)
{printf("Strings Are  equal\n");
}
c=strcmp(str1,str2);//USING FUNCTION
if(c==0){printf("The strings are equal!\n");
}
else{printf("Not equal");
}
return 0;
}

