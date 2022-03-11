#include<stdio.h>
#include<stdlib.h>

void sumnum()
{
    int num = 0;
    int sum = 0;
    int temp = 0;
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10;
        sum += temp;
        num = num /10;
    }

    printf("sum=%d\n", sum);
    
}
int main()
{
    sumnum();    
    
    return EXIT_SUCCESS;
}