#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int j = 0, l = 0, h = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(j = 0; str[j] !='\0'; j++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(j = 0; j <= l-1; j++)
   {
      if(str[j] == ' ')
      {
    h = h + 1;
      }
   }
   printf("The number of words in the string are %d", h);
   getch();
}
