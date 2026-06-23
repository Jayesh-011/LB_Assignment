#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Display(arr);

    return 0;
}