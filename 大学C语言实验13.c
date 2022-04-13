#include<stdio.h>
#include<stdlib.h>

int isPrime(int n) {

    int i = 0;

    for (i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int num;
    int sum = 0;
    printf("100-200间素数有:");
    for (int n = 100; n < 200; n++)
    {
        num = isPrime(n);
        if(num == 1)
        {
            printf("%5d", n);
            sum += n;
        }
    }
    printf("\n");
    printf("和为:%d", sum);
    return EXIT_SUCCESS;
    
}