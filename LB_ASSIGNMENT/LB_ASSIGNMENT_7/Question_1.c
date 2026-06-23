#include<stdio.h>
void Display(int iNo)
{
    for(int iCnt = 0;iCnt <= 1;iCnt++){
        char arr[2] = {'*','#'};
        for(int iBnt = 0;iBnt < iNo ; iBnt++){
            printf("%c\t",arr[iCnt]);
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
// Time Complexity = O(n^2)
// Where n >= 0