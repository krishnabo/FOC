#include<stdio.h>
int main()
{
	int i,n,a,sum=0;
	float avg;
	printf("Enter how many numbers you want:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a);
		sum=sum+a;
	}
	avg=sum/a;
	printf("Sum of %d numbers=%d\n",n,sum);
	printf("avg of %d numbers=%2f",n,avg);
}
