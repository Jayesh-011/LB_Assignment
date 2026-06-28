#include<stdio.h>

typedef unsigned int UINT;

int OnBit(UINT iNo)
{
    int iCount = 0;
    UINT iMask = 0x1;

    for(int iCnt = 0;iCnt < 32;iCnt++)
    {
        if((iNo & iMask) == iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("No of ON Bits : %d\n",iRet);

    return 0;
}