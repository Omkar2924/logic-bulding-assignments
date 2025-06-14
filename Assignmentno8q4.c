#include<stdio.h>
double FhtoCs( float fTemp)
{   
    double Celsius =0.0;
    Celsius = ((fTemp - 32)*(5.0/9.0));
    return Celsius;
}
int main()
{
    float fValue =0.0;
    double dRet =0.0;

    printf("Enter temperatur in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);

    printf("the distance btn kilometer%.6lf\n",dRet);

    return 0;

}