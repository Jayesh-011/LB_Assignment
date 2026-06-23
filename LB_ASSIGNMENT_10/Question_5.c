#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqrMtr = 0;

    dSqrMtr = iValue * 0.0929;

    return dSqrMtr;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in sq mtr is %lf\n",dRet);

    return 0;
}
// Time Complexity = O(1)
// Where n >= 0
