#include<stdio.h>
int main()
{
    float a,b,c,Perimetro,Area;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
        printf("Perimetro = %.1f\n",Perimetro=a+b+c);

    else
        printf("Area = %.1f\n",Area=((a+b)*c)/2);
    return 0;

}
