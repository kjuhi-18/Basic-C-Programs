#include<stdio.h>
int fibonacci(int);
int main(){
int a,b;
printf("Enter the length of fibonacci series:");
scanf("%d",&a);
for(int i=1;i<=a;i++){

b=fibonacci(i);
printf("%d ",b);}
return 0;
}
int fibonacci(int a){
	
	if(a==0){return 0;
	}
	else if(a==1){
		return 1;
	}
	else if(a>1){
		return fibonacci(a-1) +  fibonacci(a-2);}
}
	

