#include<stdio.h>
int main()
{
    int a,x;
    int i,n,sum,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0,j=1;
        scanf("%d",&x);
        while(j<x){
        if(x%j==0){
            sum+=j;
        }
        j++;
        }
        if(sum==x)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);

    }
    return 0;
}
