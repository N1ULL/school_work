#include<stdio.h>

void main()
{
    int a,b,c,d,fr=0;
    int arr[1000];
    for ( a = 1; a < 10; a++)
    {
        for ( b = 0; b < 10; b++)
        {
            for ( c = 0; c < 10; c++)
            {
                for ( d = 0; d < 10; d++)
                {
                    if (a+c==b*d)
                    {
                        arr[fr]=a*1000+b*100+c*10+d;
                        fr+=1;
                    }
                    
                }
                
            }
            
        }
        
    }
    printf("%d", arr[fr-1]);
    
}