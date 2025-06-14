#include<stdio.h>
void Table(int iNo)
{
    if(iNo <0)
    {
        iNo=-iNo;
    }
   int iCnt =0;

   for(iCnt =10;iCnt >=1;iCnt--)
   {
        printf("%d\t",iNo*iCnt);
   }
   printf("\n");
}
int main()
{
    int ivalue =0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Table(ivalue);
    
    return 0;
}
