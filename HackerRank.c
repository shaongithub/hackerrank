#include <stdio.h>
int solveMeFirst(int a, int b);         // function prototype
int main()
{
    int a,b,sum;

    scanf("%d %d", &a,&b);
    sum = solveMeFirst(a,b);        // function call
    printf("%d",sum);
    return 0;
}
int solveMeFirst(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
