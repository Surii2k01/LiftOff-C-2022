#include<stdio.h>
int GCD(int,int);

int main()
{
	int a,b,gcd;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	
	gcd=GCD(a,b);
	printf("The GCD is %d",gcd);
	
}

int GCD(int x, int y)
{
	if(y==0)return x;
	else
	return GCD(y,x%y);
}