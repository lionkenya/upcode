#include <stdio.h>
#include <math.h>
int main()
{
	int flag=0,i,j,dem1=3,dem2=0,a[100];
	while (dem1<20)
	{
		for (i=2;i<=sqrt((float)dem1);i++)
		{
			if (dem1%i==0) flag==dem1;
		}
	
	dem1++;
	}
printf ("%d",flag);
}

