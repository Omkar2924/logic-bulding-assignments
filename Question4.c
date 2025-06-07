#include<stdio.h>
void DisplayConvrt(int cValue)
{
    if("cValue>='a" && cValue <= 'z')
    {
        printf("%c\n",cValue -32);
    }
    else if(cValue >='A'&& cValue <='z')
    {
        printf("%c \n",cValue +32);
    }
}
int main()
{
    int cValue=0;
    printf("Enter character \n");
    scanf("%c", &cValue);
    
    DisplayConvrt(cValue);

    return 0;
}