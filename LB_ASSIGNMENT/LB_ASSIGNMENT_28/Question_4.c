#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0,iJnt = 0;

    for(iCnt = 0;iCnt < iRow;iCnt++)
    {
        for(iJnt = 1;iJnt <= iCol;iJnt++)
        {
            if((iJnt + iCnt) == iCol)
            {
                printf("*\t");
            }
            else if(iJnt == 1 || iCnt == 0 || iJnt == iCol || iCnt == (iRow -1))
            {
                printf("*\t");
            }
            else if((iJnt + iCnt) < iCol)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}