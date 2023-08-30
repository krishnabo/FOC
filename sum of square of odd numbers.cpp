#include<stdio.h>
int main()
{
	int n,a=1,sum=0;
	printf("Enter the numnber:");
	scanf("%d",&n);
	while(a<=n){
		if(a%2!=0){
			sum+=a*a;
		}
		a++;
	}
	printf("The sum of squares of odd numbers=%d",sum);
}
