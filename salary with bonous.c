#include<stdio.h>
int main ()
{
    char em;
    double ms,bs,gs;
    scanf("%s%lf%lf",&em,&ms,&bs);
    gs = ms + ((bs*15)/100);
    printf("TOTAL = R$ %.2lf",gs);
    return 0;

}
