
#include<stdio.h>
void FactRev(int iNo)
{
    
    for(int i = iNo ;i>=1;i--)
    {
        if(iNo % i==0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue =0;
    printf("Enter number:\n ");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}