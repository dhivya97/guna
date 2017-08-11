#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
    int n1, n2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &n1, &n2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", n1, n2);
    swap(&n1, &n2);        
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", n1, n2);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
