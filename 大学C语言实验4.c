#include<stdio.h>
#include<stdlib.h>

void jiaohuan()
{
    int a,b,c,temp1,temp2;
    printf("请输入a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    temp1 = b;
    temp2 = c;
    b = a;
    c = temp1;
    a = temp2;
    printf("改变后的a,b,c为:a=%d,b=%d,c=%d\n", a, b, c);
}
int main()
{
    jiaohuan();

    return EXIT_SUCCESS;
}