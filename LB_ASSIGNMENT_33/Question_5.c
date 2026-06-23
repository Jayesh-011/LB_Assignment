#include<stdio.h>

void StrrevX(char *str)
{
    char *start = str;
    char cTemp[20] = {'\0'};
    int iIndex = 0;

    while(*str != '\0') 
    {
        cTemp[iIndex] = *str;
        str++;
        iIndex++;
    }

    str--;

    iIndex = 0;
    while(str >= start)
    {
        *str = cTemp[iIndex];
        str--;
        iIndex++;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrrevX(arr);

    printf("Modified String %s\n",arr);

    return 0;
}