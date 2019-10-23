#include <stdio.h>
#include <math.h>


int main()
{
	long long int sum=0,count=0;
	int a=2,i;
	
	while (a<=2000000)
	{
		count=0;
		for (int i=2; i<=sqrt(a); i++) 
		{
		   if (a%i==0) count++;
		   if (count!=0) break;
		}
		if (count==0) sum+=a;
		a+=1;
	}
	
	printf (" %lli",sum);
	return 0;	
}

