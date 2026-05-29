#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(int iCnt = iEnd;iCnt >= iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

// Time Complexity = O(n)
// Where n >= 0