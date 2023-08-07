#include <stdio.h>

int main() 
{
    int n,a,x;
    printf("enter number\t");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(x=1;x<=a;x++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
