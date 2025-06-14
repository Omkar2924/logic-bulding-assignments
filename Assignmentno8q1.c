#include<stdio.h>
double CircleArea(float fRadius)
{
    double Area =0.0f;
    Area =3.14 *fRadius*fRadius;
    return Area;
}
int main()
{
    float fValaue =0.0;
    double dRet =0.0;

    printf("Enter radius\n");
    scanf("%f",&fValaue);

    dRet = CircleArea(fValaue);
    printf(" Area of circle is %.3lf\n",dRet);
    return 0;
}