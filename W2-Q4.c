#include<stdio.h>  
  
int main()  
{  
    int n1=0, n2=1, n3, x;  
  
    printf("Enter the limit\n");  
    scanf("%d", &x);
    printf("Fibonacci Series-\n");
	  
  
    printf("\n%d\n%d\n", n1, n2);  
  
    x=x-2;  
  
    while(x)  
    {  
        n3=n1+n2;  
        printf("%d\n",n3);  
        n1=n2;  
        n2=n3;  
        x=x-1;  
    }  
  
  
    return 0;  
}  