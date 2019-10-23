#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long m;
	int sum=0,x;
	m=pow (2,15);
	while (m!=0)
	{
		x=m%10;
		sum+=x;
		m=m/10;
	}
	printf ("%d",sum);
}
