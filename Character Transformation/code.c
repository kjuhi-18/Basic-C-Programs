#include<stdio.h>
int main()
{
	char upr,lowr;
	int ascii;
	
	printf("Enter the lower case character:");
	scanf("%c",&lowr);
	getchar();
	ascii=lowr-32;
	printf("%c character in the upper case is: %c",lowr,ascii);
	
	printf("\n Enter the Upper case character:");
	scanf("%c",&upr);
	getchar();
	ascii=upr+32;
	printf("%c character in the lower case is: %c",upr,ascii);
	
	return 0;
}
