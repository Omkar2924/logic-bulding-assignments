#include<stdio.h>
int MultFact (int iNo)
{
    int iCnt =0;
    int iFact =0;

    for (iCnt =1;iCnt =iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
        return ;
    }
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);
    

    return 0;
}