#include<stdio.h>
#include<stdlib.h>

long jiecheng1(int m)
{
    if (m == 1)
    {
        return 1;
    }
    else
    {
        return m*jiecheng1(m-1);
    }
    
}
long jiecheng2(int n)
{
    long sum=1;
	int i;
	for(i=n;i>0;i--)
	{
		sum*=i;
	}
	return sum;
}
long main()
{
    long x = jiecheng1(10);
    long y = jiecheng2(10);
    printf("10!=%d\n", x);
    printf("10!=%d\n", y);
    return EXIT_SUCCESS;
}