#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        for(;ch >= 'a';ch--)
        {
            printf("%c\t",ch);
        }
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        for(;ch <= 'Z';ch++)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        printf("");
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}