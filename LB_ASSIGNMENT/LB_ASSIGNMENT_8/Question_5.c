#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqrMtr = 0.0;

    dSqrMtr = iValue * 0.0929;

    return dSqrMtr;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in SQ feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in SQ mtr is %lf\n",dRet);

    return 0;
}