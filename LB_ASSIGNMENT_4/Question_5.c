#include<stdio.h>

int FactDiff(int iNo)
{
    int iNonFactSum = 0;
    int iFactSum = 0;

    for(int iCnt = 1;iCnt < iNo;iCnt++){
        if((iNo % iCnt) == 0){
            iFactSum = iFactSum + iCnt;
        }
        else{
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    // printf("%d\n",iFactSum);
    // printf("%d\n",iNonFactSum);
    
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}