#include<stdio.h>

int ChkChar(char *str, char ch)
{
    char *Start = str;
    int index = 0;

    while (*str != '\0')        
    {
        str++;
        index++;
    }
    
    str--;
    // index--;

    while(str >= Start)
    {
        
        if(*str == ch)
        {
            break;
        }
        index--;

        str--;
    }
    
    if(index == 0)
    {
        index = -1;
    }

    return index;
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

    printf("Index is : %d\n",iRet);
    
    return 0;
}