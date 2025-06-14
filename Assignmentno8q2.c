#include<stdio.h>
double CircleArea(float fWidth ,float fHeight)
{
    double Area =0.0f;
    Area =fWidth*fHeight;
    return Area;
}
int main()
{
    float fValue1 =0.0;
    float fValue2=0.0;
    double dRet =0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter heigth\n");
    scanf("%f",&fValue2);


    dRet = CircleArea(fValue1,fValue2);
    printf(" Area of circle is %.3lf\n",dRet);
    return 0;
}