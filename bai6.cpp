#include <stdio.h>
#include<math.h>

int main()
{
	int i,j,sum1=0,sum2=0,sum3=0;
	for (i=1;i<=100;i++)
	{
		sum1+=pow (i,2);
	}
	for (i=1;i<=100;i++)
	{
		sum3+=i;
	}
	sum2=pow(sum3,2);
	printf ("%d",sum2-sum1);
}
