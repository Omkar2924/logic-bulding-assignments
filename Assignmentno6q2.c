#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0) // negative input asal ki updater (convert)
    {
       iNo =-iNo;
    }
    if((iNo>=0) && (iNo <=9))
    {
        switch (iNo)
        {
            case 0:
                printf("Zero\n");
                break;

            case 1:
                printf("First\n");
                break;

            case 2:
                printf("Second\n");
                break;

            case 3:
                printf("Three\n");
                break;

            case 4:
                printf("Four\n");
                break;
            
            case 5:
                printf("Five\n");
                break;

            case 6:
                printf("Six\n");
                break;

            case 7:
                printf("Seven\n");
                break;

            case 8:
                printf("Eight\n");
                break;

            case 9:
                printf("Nine\n");
                break;
     
        }
    }
    else
    {
        printf("Invalide Number");
    }
}
int main()
{
    int ivalue =0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}