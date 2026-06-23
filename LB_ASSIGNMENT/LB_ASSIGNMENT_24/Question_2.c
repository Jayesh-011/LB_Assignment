#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt = 0,iJnt = 0;

    if(iCol > 25)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        int iChar = 0;
        if((iCnt % 2) == 0)
        {
            iChar = 97;
        }
        else
        {
            iChar = 65;
        }

        for(iJnt = 0;iJnt < iCol;iJnt++)
        {
            printf("%c\t",iJnt+iChar);
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