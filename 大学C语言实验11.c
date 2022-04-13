#include<stdio.h>
#include<stdlib.h>

int ex5()
{
    int n,s1,s2,s3;
    for ( n = 100; n < 501; n++)
    {
        s1 = n / 100;
        s2 = n % 100 /10;
        s3 = n % 10;
        if(s1+s2+s3==15)
        {
            printf("%5d", n);
        }
    }
    printf("\n");
    
}

int main()
{
    printf("各个位上数字之和为15的数有:");
    ex5();
    return EXIT_SUCCESS;
}