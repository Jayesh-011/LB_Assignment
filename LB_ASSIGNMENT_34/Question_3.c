#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z') || (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyCap(arr,brr);

    printf("Modified String %s\n",brr);

    return 0;
}