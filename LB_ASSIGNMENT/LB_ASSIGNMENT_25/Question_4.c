#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt = 0,iJnt = 0;

    if(iCol > 25)
    {
        printf("invalid Range");
        return;
    }

    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        // int iCount = 0;
        for(iJnt = 1;iJnt <= iCol;iJnt++)
        {
           if((iCnt % 2) == 0)
           {
                printf("%d\t",-iJnt);
           }
           else
           {
                printf("%d\t",iJnt);
           }
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