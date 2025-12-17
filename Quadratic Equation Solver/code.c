#include <math.h>
#include <stdio.h>
int main()
{ 
    float a,b,c,descriminant,root1,root2,realpart,imagpart;
    printf("Please enter the cofficients of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);

    descriminant=b*b-(4*(a*c));
    printf("The given equation is %fx^2+%fx+%f",a,b,c);
    if (a==0)
    {
    	printf("\nThis is not a quadrtic equation");
	}
    else if (descriminant>0)
    {
        root1=(-b+sqrt(descriminant))/(2*a);
        root2=(-b-sqrt(descriminant))/(2*a);
        printf("The roots are %f%f",root1,root2);
    }
    else if (descriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("The roots are%f,%f",root1,root1);

    }
    
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-descriminant)/(2*a);
        
        printf("The roots are %f+ %fi, %f- %fi ",realpart,imagpart,realpart,imagpart);
    }
    
    return 0;
}
