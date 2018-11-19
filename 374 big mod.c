#include<stdio.h>
#include<math.h>

int main()
{
    int m;
    long long b,p;
    int r;
    scanf("%ld%ld%d",&b,&p,&m);
    r=pow(b,p) % m;
    printf("%d\n",r);
    return 0;
}
