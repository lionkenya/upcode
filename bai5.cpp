#include <stdio.h>

int main()
{
	int n,i=2,temp=1,bc,j;
	while (i<21)
	{
		temp=temp*i;
		for(j=1;j<=temp*i;j++)
		{
			if ((j%temp==0) &&(j%i==0)) 
			{
			    temp=j;
				break;
			}}
	i++;
	}
	printf ("%d",temp);
}

