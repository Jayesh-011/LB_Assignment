#include<stdio.h>
void TableRev(int iNo)
{
    if(iNo < 0){
        iNo = -iNo;
    }else if(iNo == 0){
        printf("Cannot Print Table of 0");
    }

    for(int iCnt = 10;iCnt >= 1;iCnt--)
    {
        printf("%d\t",(iNo * iCnt));
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return 0;
}

// Time Complexity = O(n)
// Where n >= 0