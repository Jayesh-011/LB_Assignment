#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt = 0,iJnt = 0;

    for(iCnt = iRow;iCnt >= 1;iCnt--)
    {
        for(iJnt = 0;iJnt < iCol;iJnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}