#include<stdio.h>
int KMtoMeter(int iNo)
{   
    
    return iNo*1000;
}
int main()
{
    int  iValue =0;
    int  iRet =0;

    printf("Enter distance in km:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("the distance btn kilometer%d\n",iRet);
    return 0;
}