#include <stdio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int word;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(str);
    for(word=0;str[word]!=NULL;word++)
    {
    if(str[word]>='0' && str[word]<='9')
    wordDigits++;
        else if((str[word]>='A' && str[word]<='Z')||(str[word]>='a' && str[word]<='z'))
            countAlphabet++;
        else if(str[word]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
     printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
      return 0;
}
    
