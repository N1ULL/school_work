#include<stdio.h>
#include<string.h>

int main()
{
    int s[10],i,sum=0;
    for ( i = 0; i < 10; i++)
    {
        printf("请输入学生成绩：",i+1);
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    printf("平均成绩%.2f",(float)sum/10.0);
    return 0;
        
}