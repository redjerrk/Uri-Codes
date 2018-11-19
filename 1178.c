#include<stdio.h>
int main()
{
    int i;
    double n,a,b[100];
    scanf("%lf",&n);
    for(i=0;i<100;i++){
       b[i]=n;
       printf("N[%d] = %.4lf\n",i,b[i]);
       n=n/2;
    }
}
