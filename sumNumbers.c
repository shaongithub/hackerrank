#include<stdio.h>
int main()
{
    int n,m, sum1, sum2;
    float x,y, sum3, sum4;

    scanf("%d %d %f %f", &n, &m, &x, &y);
    sum1=n+m;
    sum2=n-m;
    sum3=x+y;
    sum4=x-y;

    printf("%d %d\n%0.1f %0.1f\n", sum1, sum2, sum3, sum4);
    return 0;

}
