#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long c,x=pow(2,100);
	int sum=0;
	while (x!=0)
	{
		c=x%10;
		sum+=c;
		x/=10;
	}
	printf ("%d",sum);
}
