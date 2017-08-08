#include <stdio.h>
int main()
{
    char n, i;

    printf("Enter an integer: ");
    scanf("%c",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%c * %c = %c \n", n, i, n*i);
    }
    
    return 0;
}
