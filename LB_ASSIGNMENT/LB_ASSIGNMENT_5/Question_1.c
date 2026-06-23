#include <stdio.h>

void Pattern(int iNo){
    if(iNo < 0){
        iNo = -iNo;
    }
    for(int iCnt = 0; iCnt < iNo ; iCnt++){
        printf("$\t*\t");
    }

    printf("\n");
}


int main(){
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}