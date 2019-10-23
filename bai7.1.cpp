#include <stdio.h>

int main()
{

	long long dem=0,i=3,j,a[4000],u=1;
	while (u<6)
	{
		for (j=3;j<=i;j+=2)
		{
			if (i%j==0) 
			    dem++;
		}
		if (dem==1) 
		{
				a[u]=j;
				u++;
		}
	    dem=0;
	    i+=2;
	}
	printf ("%lli",a[u-1]);
}
