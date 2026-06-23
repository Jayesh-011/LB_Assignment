#include<stdio.h>

int ChkChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = ChkChar(arr,cValue);

    printf("Frequency is : %d\n",iRet);
    
    return 0;
}