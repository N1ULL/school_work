#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int arr[],int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j] > arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
}
int main()
{
    int arr[3];
    printf("请输入3个数:");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    return EXIT_SUCCESS;
}