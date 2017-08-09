
#include <stdio.h>
int main()
{
    int j, num1, num2, min, hcf=1;
     printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);
    min = (num1<num2) ? num1 : num2;

    for(j=1; j<=min; j++)
    {

        if(num1%j==0 && num2%j==0)
        {
            hcf = j;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    return 0;
}
