#include<stdio.h>
int MultFact(int iNo)
{
    int iRes = 1;

    for(int iCnt = 1 ; iCnt <= (iNo / 2); iCnt++){
        // printf("Inside for");
        if((iNo % iCnt) == 0){
            // printf("Inside if");
            iRes = iRes * iCnt;
        }
    }

    return iRes;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);

    return 0;
}