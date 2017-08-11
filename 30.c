#include <stdio.h>

int main()
{
    int j, n;
   
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);
    for(j=1; j<=n; j++)
    {
        if(j%2!=0)
        {
            printf("%d\n", j);
        }
    }
