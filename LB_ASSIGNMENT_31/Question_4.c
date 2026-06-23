#include<stdio.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkVowel(char *ch)
{
    BOOL bFlag = FALSE;

    for(;*ch != '\0';ch++)
    {
        if(*ch == 'a' || *ch == 'A' || *ch == 'e' || *ch == 'E' || *ch == 'i' || *ch == 'I' || *ch == 'o' || *ch == 'O' || *ch == 'u' || *ch == 'U')
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    char cValue[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter the characters :");
    scanf("%s",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("Does't Contain Vowels\n");
    }

    return 0;
}