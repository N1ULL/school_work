#include<stdio.h>
#include<stdlib.h>

void maopaopaixu()
{
    int arr[3];
    printf("请输入三个数:");
    scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    printf("最大的是%d\n", arr[0]);
}
int main()
{
    maopaopaixu();

    return EXIT_SUCCESS;
}