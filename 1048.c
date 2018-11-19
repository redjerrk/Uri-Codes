#include<stdio.h>
int main()
{
    double a,b,n;
    while(scanf("%lf",&n)==1){
        if(n>=0 &&n<=400.00)
            a=15;
        else if(n>=400.01 && n<=800.00)
            a=12;
        else if(n>=800.01 && n<=1200.00)
            a=10;
        else if(n>=1200.01 && n<=2000.00)
            a=7;
        else
            a=4;
        b=(n*a/100);
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: %.0lf %%\n",a);
    }


}
