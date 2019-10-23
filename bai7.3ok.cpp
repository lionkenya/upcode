#include <stdio.h>

int main()
{
    long count,j,i=1;
    
    for (j=3;i!=10001;j+=2) 
    {
        for (count=3;count<j;count+=2) 
        {
            if (j%count==0)
                break;
        }
        if (count==j)
            i++;
    }
    
    printf("%li",count);
}

