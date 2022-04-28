#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    int sum = 0;
    printf("请输入10个数:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%10==3)
        {
            printf("%d\t",a[i]);
            sum +=1;
        }
        
    }
    printf("\n");
    printf("个位数是3的元素有:%d个", sum);
    
}