#include<stdio.h>
int main(){
	
    int n,i;
	printf("Enter the length of fibonnacci series:");
	scanf("%d",&n);
	int fibb[n];
	fibb[0]=0;
	fibb[1]=1;
	
	if(n==1)
	{
		printf("%d",fibb[0]);
	}
	else if(n==2)
	{
		printf("%d,%d",fibb[0],fibb[1]);
			
	}
	else if(n==0)
	{
		printf("No series found");
	}
	else
	{
		for(i=2;i<=n;i++){
			fibb[i]=fibb[i-1]+fibb[i-2];
			}
				
		for(i=0;i<n;i++)
		{
			printf("%d ",fibb[i]);
		}
	}
	return 0;
}
