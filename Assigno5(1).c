#include<stdio.h>
void Pattern (int iNo ,char ch )
{
    int iCnt =0;
    if(iCnt <0)
    {
        iNo=-iNo;
    }
    for(iCnt =1; iCnt >iNo;iCnt++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iValue =0;
    int cValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter chracter :");
    scanf("%c",cValue);

    Pattern(iValue,cValue);

    return 0;
}
