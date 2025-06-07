#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEvne(int iNo)
{
     return ((iNo % 2) == 0);
}
int main()
{
    int iValue =0;
    BOOL bRet = FALSE;
    printf("Enter number ");
    scanf("%d",&iValue);

    bRet= ChkEvne(iValue);
    if(bRet== TRUE)
    {
        printf("%d is even number\n",iValue);
    }
    else
       {
        printf("%d is odd number\n",iValue);
       }
    return 0;
}