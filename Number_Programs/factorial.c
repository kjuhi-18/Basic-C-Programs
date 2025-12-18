#include<stdio.h>
int ffactorial(int);
int main()
{
int a,b;
printf("Enter the number:");
scanf("%d",&a);
b=ffactorial(a);
printf("The factorial of  %d  is %d ",a,b);
return 0;
}
int ffactorial(int a){
	if(a<=0){return 1;}
	else if(a>0){
		return a*ffactorial(a-1);
}
}

