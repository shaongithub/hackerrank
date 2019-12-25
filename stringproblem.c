#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int n,i,j=0;
    scanf("%[^\n]",a); //or gets(a);
    n=strlen(a);
    for(i=0; i<n; i++)
        if(a[i]==' ')
         printf("\n");
      else
        printf("%c", a[i]);

    return 0;
}
