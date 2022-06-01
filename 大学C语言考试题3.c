#include <stdio.h>
int sumnum(char ch)
{
    if(ch>='0' && ch<='9')
        return 1;
    return 0;
}
int main()
{
    int count=0;
    char c;
    printf("请输入一个字符串");
    while(1)
    {
        c=getchar();
        if(c=='\n')
            break;
        count=count+sumnum(c);
    }
    printf("其中数字的个数为%d",count);
    return 0;
}