#include<stdio.h>
int fibonacci(int n)
{
	if(n<=1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int i,n;
	printf("enter the number of terms in the fibonacci sequence:");
	printf("%d",&n);
	printf("fibonacci sequence:\n");
	for(i=0;i<n;i++)
	printf("%d",fibonacci(i));
	return 0;
}
