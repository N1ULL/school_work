#include<stdio.h>
#include<stdlib.h>

int fibonacci(int index)
{
    if (index == 1 || index == 2) 
    {
        return 1;
    }
    return fibonacci(index - 1) + fibonacci(index - 2);
}
int main()
{
    int i;
    int num = 0;
    printf("输出几位:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    return EXIT_SUCCESS;
}