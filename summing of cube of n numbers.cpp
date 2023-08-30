#include<stdio.h>
int main()
{
	int n,a=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(a<=n){
		sum+=a*a*a;
		a++;
	}
	printf("The sum of cube of first %d number is %d",n,sum);
}
