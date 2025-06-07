#include <stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumFact += i;
        }
        else
        {
            iSumNonFact += i;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
