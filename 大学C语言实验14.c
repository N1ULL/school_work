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
    printf("input:");
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("min=%d,max=%d\n",arr[0] ,arr[9]);
    return EXIT_SUCCESS;
}