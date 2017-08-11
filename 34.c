#include <stdio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    printf("Enter a string: ");
    gets(str);
     for(count=0;str[count]!=NULL;count++)
    {
    if(str[count]>='0' && str[count]<='9')
    countDigits++;
     else if((str[count]>='A' && str[count]<='Z')||(str[count]>='a' && str[count]<='z'))
     countAlphabet++;
     else if(str[count]==' ')
     countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    return 0;
}
    
