#include<stdio.h>
int main()
{
    int i,v,a[10],sum=0;
    scanf("%d",&v);

    for(i=0;i<10;i++){
        sum+=v;
        a[i]=sum;
        v=sum;
        printf("N[%d] = %d\n",i,sum);
    }

}
