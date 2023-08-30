#include<stdio.h>
int main()
{
	int n,a=1,sum=0;
	printf("Enter the positive integer:");
	scanf("%d",&n);
	while(a<=n){
		sum+=(a*a);
		a++;
	}
	printf("The sum of nth power series is %d\n",sum);
}
