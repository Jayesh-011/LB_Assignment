#include <stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel ( char cChar)
{
    if(cChar == 65 || cChar == 69 || cChar == 73 || cChar == 79 || cChar == 85 || cChar == 97 || cChar == 101 || cChar == 105 || cChar == 111 || cChar == 117)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}