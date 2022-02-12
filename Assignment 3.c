#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	switch(num%2)
    {
    	case 0:
    		printf("Its an even number");
    		break;
    	case 1:
		    printf("Its an odd number");	
		    break;
	}
		
}