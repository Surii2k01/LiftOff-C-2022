#include<stdio.h>
#include<math.h>

int main()
{
	int n, fd, ld, d, new;
	printf("Enter number");
	scanf("%d",&n);
	
	ld=n%10;
	d=(int)log10(n);
	fd=(int)(n/pow(10,d));
	
	new= ld;
	new*= (int)round(pow(10,d));
	new+= n%(int)round(pow(10,d));
	new-= ld;
	new+= fd;
	
	printf("The  number after swapping first and last digit is %d",new);
	return 0;
	
}