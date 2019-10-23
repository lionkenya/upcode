#include <stdio.h>
#include <math.h>
int main()
{
	int i,j=0,a[100],x,y,z,t;
	for (i=0;i<100;i++)
	{
		a[i]=0;
	}
	for (i=0;i<=1000000;i++)
	{
		z=0;
		t=i;
		for (x=0;x<=6;x++)
		{
			y=t%10;
			z+=pow(y,5);
			t=t/10;
		}
		if(z==i)
		{
			a[j]=i;
			j++;
		}
	}
	int sum=0;
	for (i=0;i<j;i++)
	{
		sum+=a[i];
	}
	printf ("%d",sum-1);
}
