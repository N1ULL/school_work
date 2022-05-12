#include<stdio.h>
#include<math.h>

int isPrime(int N){
    if (N % 2 == 0){
        return 0;
    }
    int squareRoot = ceil(sqrt(N));
    for (int i = 3; i <= squareRoot; i += 2) {
        if (N % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    printf("Please input number:");
    scanf("%d", &a);
    if(isPrime(a)==1)
    {
        printf("Prime number.\n");
    }
    else printf("Composite number.\n");

}