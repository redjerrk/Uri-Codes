#include<stdio.h>
int main()
{
    int a,i,n,sum;
    scanf("%d",&n);


    for(i=2;i<=n;i+=2){

        sum=i*i;
        printf("%d^2 = %d\n",i,sum);

    }
    return 0;
}
