#include<stdio.h>
   int main()
{
    int arr1[1000]={0};
    int arr2[1000]={0};
    int arr3[1000]={0};
    arr1[0]=1;
    arr2[0]=1;
    int i=1,n=2;
    while(1)
    {
        for(i=0;i<1000;i++)
        {
            arr3[i]=arr1[i]+arr2[i];
        }
        for(i=0;i<1000;i++)
            arr1[i]=arr2[i];
        for(i=0;i<1000;i++)
        {
             arr2[i]=arr3[i];
              if(arr3[i]>9)
            {
                    arr3[i+1]=arr3[i+1]+arr3[i]/10;
                    arr3[i]=arr3[i]%10;
                    arr2[i+1]=arr2[i+1]+arr2[i]/10;
                    arr2[i]=arr2[i]%10;
                    printf ("%d %d",arr3[i],arr3[i+1]);
            }
        }
        if(arr3[999]!=0)
             break;
             n++;
    }
    printf("%d",n+1);
}
 

