#include<stdio.h>
int main()
{
    int x,y, O,X,A;
    scanf("%d %d", &x, &y);


    A=x&y;
    O=x|y;
    X=x^y;

    printf("%d %d %d", A, O, X);

    return 0;
}
