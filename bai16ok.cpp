#include <stdio.h>

int main() 
{
    int i,j,k,sum=0,a[500]={0};
    a[499]=2;
    for(i=1;i<=999;i++) 
	{
	    for(j=499;j>=0;j--) 
		{
	        a[j]*=2;
	    }
	    for(k=499;k>=0;k--) 
	    {
	       if(a[k]>=10) 
		   {
		        a[k]%=10;
	         	a[k-1]+=1;
	       }
	    }
    }
    for(int i=0;i<500;i++) 
	{
	    sum+=a[i];
    }
    printf("%d",sum);
    return 0;
} 
