#include<stdio.h>
int main()
{
    int a[1000], i,n, sum=0;

    scanf("%d", &n);
     if(n>0)
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("%d", sum);
    return 0;
}
