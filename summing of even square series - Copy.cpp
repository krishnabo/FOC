#include<stdio.h>
int main()
{
	int n,a=2,sum=0;
	printf("Enter the positive number: ");
	scanf("%d",&n);
	while(a<=n){
		sum+=a*a;
		a+=2;
	}
	printf("The sum of even square series:%d\n",sum);
}
