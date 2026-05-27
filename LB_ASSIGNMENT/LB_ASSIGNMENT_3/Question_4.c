#include <stdio.h>

void DisplayConvert ( char CValue)
{
    if(CValue >= 65 && CValue <= 90)
    {
        printf("%c\n",CValue+32);
    }
    else if(CValue >= 97 && CValue <= 122)
    {
        printf("%c\n",CValue-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}