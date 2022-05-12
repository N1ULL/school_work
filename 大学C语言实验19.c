#include<stdio.h>
#define N 40
int Average(int score[],int n)
{
    int i, sum=0;
    for ( i = 0; i < n; i++)
    {
        sum+=score[i];
    }
    return sum/n;
}
int main()
{
    int i,n,aver,score[N];
    for ( i = 0; i < N; i++)
    {
        score[i]=0;
    }
    printf("How many students?(<=40)\n");
    scanf("%d", &n);
    printf("input score\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    aver = Average(score,n);
    printf("Average of the courese = %d\n", aver);
    return 0;
}