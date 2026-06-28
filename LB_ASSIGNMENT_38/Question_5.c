#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        UINT iTemp = 0x1;

        iTemp = iTemp << (iCnt -1);

        iMask = iMask | iTemp;
    }

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0,iLocation1 = 0,iLocation2 = 0,iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Range Start : \n");
    scanf("%d",&iLocation1);

    printf("Enter Range End : \n");
    scanf("%d",&iLocation2);

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2);

    printf("Updated Number is : %d\n",iRet);
    
    return 0;
}