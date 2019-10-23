#include <stdio.h>

int main()
{
	int n=1,a[500],m=1,j,i=1; // i la uoc chay dan tu 1 den n // m la uoc can tim
	for (j=2;;j++)
	{
		n+=j;
		for (i=1;i<=n;i++)
		{
		
		    if (n%i==0)
		    {
			   a[m]=i;
			   m++;
		    }
		}
		if (m==6) break;
		else (m==1);
    }
		
	printf ("%d",a[m]);
}
