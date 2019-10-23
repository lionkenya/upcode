#include <stdio.h>

int main()
{
	int dem,i=1;
	long long a=0,b=1,c;
	for (i=2;;i++)
	{
		dem=0;
		c=a+b;
		a=b;
		b=c;
		while (c!=0)
	    {
			c/=10;
		    dem++;
	    }
	    if (dem==1000) break;
    }
    printf ("%d",i);
    return 0;
}
