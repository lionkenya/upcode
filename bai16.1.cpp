#include <stdio.h>
#include <math.h>

#define MAXDIGITS 500
#define EXPONENT 1000
int main()
{
	int largeNum[MAXDIGITS]={0};
	int i,j,temp,carry,sum;
	
	largeNum[0]=1;
	for (i=0;i<EXPONENT;i++)
	{
		carry=0;
		for (j=0;j<MAXDIGITS;j++)
		{
			temp=2*largeNum[j]+carry;
			carry=0;
			if (temp>9)
			{
				largeNum[j]=temp%10;
				carry=temp/10;
			}
			else largeNum[j]=temp;
		}
	}
	sum=0;
	for (i=MAXDIGITS-1;i>=0;i--)
	{
		printf ("%d ",largeNum[i]);
		sum+=largeNum[i];
	}
	printf ("\n\n%d",sum);
	
}
