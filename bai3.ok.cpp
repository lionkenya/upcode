#include <stdio.h>

int main()
{
	long long i,j,n=600851475143,max=0,dem=0;
	for (i=2;i<=n;i++)
	{
		if (n%i==0)
		{
			for (j=2;j<i;j++)
			{
				if (i%j==0) dem++;
			}
			if (dem==0) 
			{
				max=i;n=n/max;
			}
		}
	
	}
	printf ("%lli",max);
}
