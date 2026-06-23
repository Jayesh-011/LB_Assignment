#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iJCnt = 2;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 0;iCnt < iNo;iCnt ++){
        printf("%d\t",iJCnt);
        iJCnt = iJCnt + 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}