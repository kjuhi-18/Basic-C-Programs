#include<stdio.h>
int main()
{
	int r,c;
	printf("Please enter the dimension of matrices:\n Please enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	int mat1[r][c],mat2[r][c],mat3[r][c];
	int i=0,j=0;
	printf("Please Input the matrix 1 \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		printf("Please enter the %d ,%d element of mat1: ",i,j);
		scanf("%d",&mat1[i][j]);
		
	}
}
printf("Please Input the matrix 2 \n ");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{printf("Please enter the %d ,%d element of mat2 :",i,j);
		scanf("%d",&mat2[i][j]);
		mat3[i][j]=mat1[i][j]+mat2[i][j];}}
		
printf("The resultant matrix is: \n");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
}
return 0;
}
