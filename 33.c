#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[1000];
    int count = 0, j;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (j = 0;s[j] != '\0';j++)
    {
        if (s[j] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
