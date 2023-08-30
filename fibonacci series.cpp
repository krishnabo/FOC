#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=0;
	b=1;
	c=a+b;
	while(c<=n){
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
	}
}
