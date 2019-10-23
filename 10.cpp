#include <stdio.h>

int main()
{
	for (j=3;i!=2;j+=2) 
    {
        for (count=3;count<j;count+=2) 
        {
            if (j%count==0)
                break;
        }
        if (count==j)
            i++;
    }
}
