#include<stdio.h>

int getSum(int);
int main()
{
  int number,sum;
  printf("Enter a number: ");
  scanf("%d",&number);

  sum = getSum(number);

  printf("Sum of digits of number:  %d",sum);
  return 0;
}

int getSum(int num)
{

    static int sum =0,r;

    if(number!=0){
      r=number%10;
      sum=sum+r;
      getSum(number/10);
    }

    return sum;
}
