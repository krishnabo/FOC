#include<stdio.h>
int main()
{
	int n,digit;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The digits of the numbers are:");
	while(n!=0){
		digit=n%10;
		printf("%d\n",digit);
		n/=10;
	}
}
