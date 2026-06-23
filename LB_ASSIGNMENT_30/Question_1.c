#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("Decimal\tSymbol\t\t\tHexaDecimal\tOctal\n");
    for(iCnt = 0;iCnt <= 255;iCnt++)
    {
        if(iCnt <= 32 || iCnt >= 127)
        {
            printf("%d\tCannot Print Character\t\t%x\t\t%o\n",iCnt,iCnt,iCnt);
        }
        else
        {
            printf("%d\t%c\t\t\t\t%x\t\t%o\n",iCnt,iCnt,iCnt,iCnt);
        }
    }
}

int main()
{
    DisplayASCII();
    return 0;
}