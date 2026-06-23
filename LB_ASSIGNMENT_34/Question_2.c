#include<stdio.h>

void StrCpyX(char *src,char *dest,int iCnt)
{
    while((*src != '\0') && (iCnt != 0) )
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty string

    StrCpyX(arr,brr,13);

    printf("Modified String %s\n",brr);

    return 0;
}