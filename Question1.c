#include<stdio.h>
void PrintEven(int iNo)
{
    int i=0;
    if(iNo<=0)

    
    for(i =0;i<=iNo;i++)
    {
        
        printf("%d\t",2*i);
    }
}
int main()
{
    int iValue =0;
    printf("enter number \n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}