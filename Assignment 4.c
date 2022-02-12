#include<stdio.h>
#include<conio.h>

int main() {
	int a,b,o;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	printf("Enter the number for the required operation");
	printf("\n 1-Addition");
	printf("\n 2-Substraction");
	printf("\n 3-Multiplication");
	printf("\n 4-Division");
	printf("\n 5-Modulus");
	
	printf("\n Enter required arithmetic operation:");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
			printf("The addition of %d and %d is %d",a,b,a+b);
			break;
		case 2:
		    printf("The substraction of %d and %d is %d",a,b,a-b);
		    break;
		case 3:
		    printf("The multiplication of %d and %d is %d",a,b,a*b);
		    break;
		case 4:
		    printf("The division of %d and %d is %f",a,b, (float)a/b);
		    break;
		case 5:
		    printf("The modulus of %d and %d is %d",a,b, a%b);
		    break;
			
	}
}