#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int arr[],int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j] < arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
}
void selectSort(int arr[],int len)
{
    for (int i = 0; i < len -1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
        
}
void insertSort(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        int num = arr[i];
        int j = i;
        while (j > 0 && arr[j-1] < num)
        {
            arr[j] = arr [j-1];
            j--;
        }
        arr[j] = num;
    }
    
}
int main()
{
    int arr[10]={86,39,8,44,63,82,27,15,96,49};    
    BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
    selectSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
    insertSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}