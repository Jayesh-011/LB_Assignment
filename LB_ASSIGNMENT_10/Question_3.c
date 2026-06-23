#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iMtr = 0;

    iMtr = iNo * 1000;

    return iMtr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in km :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in meter is %d\n",iRet);

    return 0;
}
// Time Complexity = O(1)
// Where n >= 0
