#include<stdio.h>  
#include<conio.h>  

int main()
{
	int a=0,b=1,c,i,u[30],m=0;
	while (c<4000000)
	{
		c=a+b;
		a=b;
		b=c;
		if (c%2==0)
		{
			u[m]=c;
			m++;
		}
	}
	int sum=0;
	for (i=0;i<m;i++)
	{
		sum+=u[i];
	}
	printf ("\nsum=%d",sum);
}

