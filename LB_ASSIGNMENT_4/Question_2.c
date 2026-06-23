#include<stdio.h>

void FactRev(int iNo)
{
    for(int iCnt = (iNo / 2); iCnt >= 1;iCnt--){
        if((iNo % iCnt) == 0){
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}