#include <stdio.h>

void Display(int iNo)
{
    
    iNo=-iNo;
    while(iNo >iNo)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
