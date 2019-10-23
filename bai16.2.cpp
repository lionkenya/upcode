#include <stdio.h>

int main() {
    int arr[320]={0};
    arr[319]=2;
    for(int i=1; i<=999; i++) 
	{
	   for(int j=319; j>=0; j--) 
	   {
	       arr[j]*=2;
	
	   }
	   for(int h=319; h>=0; h--) 
	   {
	       if(arr[h]>=10)
		   {
		       arr[h]%=10;
		       arr[h-1]+=1;
	       }
	    }
    }
    int sum=0;
    for(int i=319; i>=0; i--) {
    	printf ("%d",arr[i]);
	sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
} 
