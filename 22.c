#include <stdio.h>
int gcd(int a, int b)
{
    if (c == 0 || d == 0)
       return 0;
    if (c == d)
        return c;
    if (c > d)
        return gcd(c-d, d);
    return gcd(c, d-c);
}
int main()
{
    int c = 98, d = 56;
    printf("GCD of %d and %d is %d ", c, d, gcd(c, d));
    return 0;
}
