#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    float fArea = 0.0f;

    fArea = fPI * (fRadius * fRadius);

    return fArea;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    fRet = CircleArea(fValue);

    printf("Area of circle is : %f\n",fRet);

    return 0;
}
// Time Complexity = O(1)
// Where n >= 0
