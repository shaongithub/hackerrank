#include<stdio.h>
int main()
{
    int a[1000],i,n,j;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(j=n-1; j>=0; j--)
        printf("%d ", a[j]);
    return 0;
}
