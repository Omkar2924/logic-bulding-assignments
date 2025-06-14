#include<stdio.h>
int Factorial(int iNo)
{
    int iFact =0;
    int iCnt =0;

    for(iCnt= 1;iCnt <=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact; 
}
int main()
{
    int ivalue =0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = Factorial(ivalue);
    printf("Factorial of number is %d",iRet);
   
    return 0;
}