#include<stdio.h>
void Table(int iNo)
{
   int iCnt =0;

   for(iCnt =1;iCnt <10;iCnt++)
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
