#include<stdio.h>
int main()
{
    int n,i,flag=0,choice;
	printf("Enter an positive integer:");
	scanf("%d",&n);
	printf("What you want to do?\nPress 1 for finding whether the given number is prime or not prime\nPress 2 for finding even or odd:");
	scanf("\n %d",&choice);
	switch(choice)
	{
		case 1:
				if (n==0|| n==1)
	{
		flag=2;
	}
	if (n<0)
	{
		flag=3;
	}
	for (i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{flag=1;
		break;
		}
	}
	
	if(flag==0)
	{printf("%d is a prime number",n);
	}
	else if(flag==2)
	{printf("This is neither prime nor composite");
	}
	else if(flag==3)
	{printf("Invalid input");
	}
	else
	{
		printf("%d is a composite number",n);
		
	}
	break;
	case 2:
		if(n%2==0){
		
		printf("This is even!!");
		}
		else
		{
		printf("This is a odd number!!");
		}
		break;
	default:
			printf("Invalid choice!!!!!");


return 0;
}
}

