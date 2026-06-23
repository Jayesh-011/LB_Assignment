#include<stdio.h>
void Pattern(int iNo)
{   
    int iCnt = 0;

    if(iNo > 25)
    {
        printf("Range Out of Bound");
        return;
    }

    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        printf("%c\t",iCnt+65);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}