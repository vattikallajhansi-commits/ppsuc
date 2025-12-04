#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,total;
	float avg;
	printf("enter marks of 6 subjects");
	scanf("%d %d %d %d %d %d",&a, &b, &c,&d,&e );
	total=a + b + c + d + e;
	avg=total/6.0;
	printf("total= %d\n", total);
	printf("avg=%.2f\n",avg);
	return 0;
}
