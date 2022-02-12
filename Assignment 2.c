#include<stdio.h>

int main()
{
	int a, b;
	printf("enter two numbers:");
	scanf("%d %d", &a, &b);
	if(a>b)
	  printf("The maximum number is %d", a);
	else
	  printf("The maximum number is %d", b);    
}