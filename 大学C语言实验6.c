#include<stdio.h>
#include<stdlib.h>

void fenduan()
{
    double x,y=0;
    printf("请输入x的值:");
    scanf("%lf", &x);
    if (x<=0)
    {
        if (x == 0)
        {
            y = 0;
        }
        else
        {
            y = -1;
        }
    }
    else
    {
        y = 2 * x + 5;
    }
    printf("y=%lf", y);
}
int main()
{
    fenduan();

    return EXIT_SUCCESS;
}