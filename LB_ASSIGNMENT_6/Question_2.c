#include<stdio.h>

void Display(int iNo)
{
    char arr[10][10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    if(iNo < 0){
        iNo = -iNo;
    }else if(iNo > 9){
        printf("Invalid Number\n");
        return;
    }

    printf("%s\n",arr[iNo]);
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}

// Time Complexity = O(1)
