#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--)
            printf("%d", n);
            printf("\n");
    }
    return 0;

}
