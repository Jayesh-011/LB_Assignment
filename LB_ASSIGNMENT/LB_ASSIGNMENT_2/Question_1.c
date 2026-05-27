#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    while (iCnt <=iNo)
    {
        printf("*");
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}