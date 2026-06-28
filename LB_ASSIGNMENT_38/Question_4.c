#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL OnBit(UINT iNo,int iPos1,int iPos2)
{
    BOOL bResult = FALSE;
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if(((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
    {
        bResult = TRUE;
    }

    return bResult;
}

int main()
{
    UINT iValue = 0,iLocation1 = 0,iLocation2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter 1st Position : \n");
    scanf("%d",&iLocation1);

    printf("Enter 2nd Position : \n");
    scanf("%d",&iLocation2);

    bRet = OnBit(iValue,iLocation1,iLocation2);

    if(bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    return 0;
}