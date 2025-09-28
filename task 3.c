#include<stdio.h>
int main()
{
	int a,b,c;
	int discriminant;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("\nEnter b:");
	scanf("%d",&b);
	
	printf("\nEnter c:");
	scanf("%d",&c);
	
	discriminant = b^2 -4*a*c;
	
	if (discriminant>0){
		printf("Two real roots");
	}
	else if (discriminant==0){
		printf("One real root");
	}
	else if (discriminant<0){
		printf("Imaginary roots");
	}
	
	return 0;
	
	
	
}
