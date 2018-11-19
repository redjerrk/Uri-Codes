#include<stdio.h>
int main ()
{
    int t,d;
    double f;
    scanf("%d%d",&t,&d);
    f=(float)(t*d)/12;
    printf("%.3lf\n",f);
    return 0;
}
