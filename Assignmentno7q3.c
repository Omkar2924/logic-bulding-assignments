#include <stdio.h>

int EvenFactorial(int iNo)
{
   int iFact =0;
   int iCnt =0;
   for(iCnt=iNo ;iCnt >=2;iCnt--)
   {
        if(iCnt % 2 ==0)
        {
            iFact = iFact *iCnt;
        }
   }

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number %d\n", iRet);

    return 0;
}
