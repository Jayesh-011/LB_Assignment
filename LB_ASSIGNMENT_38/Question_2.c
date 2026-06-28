#include<stdio.h>

typedef unsigned int UINT;

int CommonBits(UINT iNo1, UINT iNo2)
{
    int iCount = 0;
    UINT iMask = 0x1;

    for(int iCnt = 0;iCnt < 32;iCnt++)
    {
        if(((iNo1 & iMask) == iMask) && ((iNo2 & iMask) == iMask))
        {
            iCount++;
        }

        iMask = iMask << 1;
    }

    return iCount;
}

int main()
{
    UINT iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("Enter Number 1: \n");
    scanf("%d",&iValue1);

    printf("Enter Number 2: \n");
    scanf("%d",&iValue2);

    iRet = CommonBits(iValue1,iValue2);

    printf("No of Common ON Bits : %d\n",iRet);

    return 0;
}