#include<stdio.h>
double CircleArea(float fRadius)
{
    double dArea = 0;
    float PI = 3.14f;

    dArea = PI * (fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf\n",dRet);
    return 0;
}
// Time Complexity = O(1)
// Where n >= 0