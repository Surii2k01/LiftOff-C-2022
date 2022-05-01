#include<stdio.h>
#include<conio.h>

void main()
{
	int l,i,j;
	char s1[20],s2[20];
	printf("Enter original string");
	gets(s1);
	l=0;
	while(s1[l]!='\0')
	 { 
		l++;
	 } 
	for(i=0,j=l-1;i<=l;i++,j--)
	 { 
		s2[j]=s1[i];
	 }  
	s2[l]='\0';
	printf("\nreverse string : %s",s2);
	
	getch();
}