#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CHkZero(int iNo)
{
    int iDigit =0;
    if(iNo<0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit ==0)
        {
            return TRUE;
        }
        iNo =iNo /10;
    }
    return FALSE;
}
int main()
{
    int iValue =0;
    BOOL bRet =FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=CHkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it Contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}