#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dCelc = 0.0;

    dCelc = ((fTemp - 32) * ((float)5/(float)9));

    return dCelc;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temp inn Celcius is : %lf\n",dRet);

    return 0;
}
// Time Complexity = O(1)
// Where n >= 0
