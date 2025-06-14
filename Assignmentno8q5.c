#include <stdio.h>

double SquareMeter(int iValue)
{
    double Meter = 0.0;
    Meter = iValue * 0.0929;
    return Meter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is %.6lf\n", dRet);

    return 0;
}
