#include<stdio.h>
void Table(int iNo)
{
    if(iNo < 0){
        iNo = -iNo;
    }else if(iNo == 0){
        printf("Cannot Print Table of 0");
    }

    for(int iCnt = 1;iCnt <= 10;iCnt++)
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

    Table(iValue);
    
    return 0;
}

// Time Complexity = O(n)
// Where n >= 0