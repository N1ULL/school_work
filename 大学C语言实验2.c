#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

void cands()
{
    float r = 0;

    printf("请输入半径：\n");
    scanf("%f", &r);

    float c = 2*pi*r;
    float s = pow(r,2)*pi;

    printf("周长=%f\t面积=%f\n", c, s);
}
int main()
{
    cands();

    return EXIT_SUCCESS;
}