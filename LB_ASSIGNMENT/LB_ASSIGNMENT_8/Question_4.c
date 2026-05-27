#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dCelcius = 0;

    dCelcius = (fTemp - 32)*((float)5/(float)9);

    return dCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temp in Celcius is %lf\n",dRet);
    return 0;
}

// Time Complexity = O(1)
// Where n >= 0