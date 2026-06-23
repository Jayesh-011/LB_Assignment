#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0,iSmall = 0;

    // Filter
    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCap++;
        }
        str++;
    }

    return iSmall - iCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    iRet = Difference(arr);

    printf("%d\n",iRet);

    return 0;
}