#include<stdio.h>
#include<stdlib.h>

void jitu()
{
    int a,b,n,m;
    printf("请输入头，脚数:");
    scanf("%d %d", &n, &m);
    a = (4 * n - m) / 2;
    b = n - a;
    if (a <= 0 || b <= 0)
    {
        printf("无解");
    }
    else
    {
        printf("小鸡:%d只:兔子:%d只", a, b);
    }
    

}
int main()
{
    jitu();
    return EXIT_SUCCESS;
}