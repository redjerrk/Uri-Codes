#include<stdio.h>
#define pi 3.14159
int main ()
{
    int r;
    double vol;
    scanf("%d",&r);
    vol=((4.0/3)*pi*r*r*r);
    printf("VOLUME = %.3lf",vol);
    return 0;
}
