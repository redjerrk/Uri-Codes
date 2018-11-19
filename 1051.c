#include<stdio.h>
int main()
{
    double n,sum,m,sum2,n1=0;
    scanf("%lf",&n);
    if(n>=0.00 &&n<=2000.00)
        printf("Isento\n");
    else{

       if(n>=2000.01 && n<=3000.00){
        n=n-2000.00;
        sum=(8*n)/100;
        printf("R$ %.2lf\n",sum);
       }
       else if(n>=3000.01 && n<=4500.00){
        n=n-2000;
        n1=n-1000;
        sum=(18*n1)/100;
        m=n-n1;
        sum2=(8*m)/100;
        sum2+=sum;
        printf("R$ %.2lf\n",sum2);
       }
       else if(n>4500.00){
        n=n-2000;
        sum=((8*1000)/100)+((18*1500)/100);
        m=n-2500;
        sum2=(m*28)/100;
        sum2+=sum;
        printf("R$ %.2lf\n",sum2);
       }
    }
    return 0;
}
