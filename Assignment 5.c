#include<stdio.h>
#include<conio.h>

int main() {
	int r;
	float pi=3.1428,d,c,a;
	printf("Enter the radius of the circle");
	scanf("%d",&r);
	d=2*r;
	c=2*pi*r;
	a=pi*r*r;
	printf("The diameter is %f\n",d);
	printf("The circumference is %f\n",c);
	printf("The area is %f\n",a);
	
}