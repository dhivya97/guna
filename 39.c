#include <stdio.h>
  int main() 
  {
    int a[10];
    int j;
    int greatest;
    printf("Enter ten values:");
    for (j = 0; j < 10; j++) 
    {
    	scanf("%d", &a[j]);
    }
    greatest = a[0];
    for (j = 0; j < 10; j++) 
    {
	if (a[j] > greatest) 
  {
	greatest = a[j];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
