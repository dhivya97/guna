#include <stdio.h>
int main()
{
    int m, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &m);

    while(m != 0)
    {
        remainder = m%10;
        reversedNumber = reversedNumber*10 + remainder;
        m /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
