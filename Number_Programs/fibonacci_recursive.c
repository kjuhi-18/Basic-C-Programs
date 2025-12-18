#include<stdio.h>
int fibonacci(int);
int main(){
int a,b;
printf("Enter the length  of fibonacci series:");
scanf("%d",&a);
for(int i=0;i<a;i++){

b=fibonacci(i);
if(b<100){

printf("%d ",b);}
else{break;
}}
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
	

