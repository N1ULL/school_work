#include<stdio.h>
#include<stdlib.h>

void change()
{
    int a = 0;
    int b = 0;
    int temp =0;

    printf("请输入a和b:\n");
    scanf("%d %d", &a, &b);
    printf("变换前：a=%d,b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("变换后：a=%d,b=%d\n", a, b);
}
int main()
{
    change();

    return EXIT_SUCCESS;
}