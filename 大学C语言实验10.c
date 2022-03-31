#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void ZiFuCount(const char *str)
{
    int let = 0, space = 0, num = 0, oth = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'z')||(*str >='A' && *str <= 'Z'))
        {
            let++;
        }
        else if (*str >= '0' && *str <= '9')
        {
            num++;
        }
        else if (*str == ' ')
        {
            space++;
        }
        else
        {
            oth++;
        }
        str++;        
    }
    printf("字母:%-4d\t空格:%-4d\t数字:%-4d\t其他:%-4d\n", let, space, num, oth);
}

int main()
{
    char a[100];
    printf("请输入字符串:");
    gets(a);
    ZiFuCount(a);
}