#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,s,d,p,q;
	printf("Enter two Number = ");
	scanf("%d%d",&a,&b);
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	printf("\tSum is = %d",s);
	printf("\tDifference is = %d",d);
	printf("\n\tProduct is = %d",p);
	printf("\tQuotient is = %d",q);
	getch();
	return 0;
	
}