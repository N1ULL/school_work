#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    printf("input 10 num:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], x, min = a[0], y;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            x = i;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            y = i;
        }
        
    }
    printf("max:a[%d]=%d\n", x, max);
    printf("min:a[%d]=%d\n", y, min);
    return EXIT_SUCCESS;
    
}