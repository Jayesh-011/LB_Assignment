#include<stdio.h>

void StrCatX(char *src, char * dest)
{
    // Filter
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0') 
    {
        *src = *dest;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[50] ="Marvellous Infosystems ";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("Modified String %s\n",arr);

    return 0;
}