#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{  
    UINT iMask = 0x1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0,iRet = 0,iLocation = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Bit Position : \n");
    scanf("%d",&iLocation);


    iRet = ChkBit(iValue,iLocation);

    if(iRet == TRUE)
    {
        printf("%d Bit is ON\n",iLocation);
    }
    else
    {
        printf("%d Bit is OFF\n",iLocation);
    }

    return 0;
}