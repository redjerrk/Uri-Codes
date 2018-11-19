#include<stdio.h>
int main()
{
    int i,m,n;
    int sum;

    while(1){
        scanf("%d%d",&m,&n);
        sum=0;
    if(m<=0 || n<=0){
        break;
    }
        else{

        if(m<n){
            while(m<=n){
                printf("%d ",m);

                sum+=m;
                m++;
            }
            printf("sum=%d\n",sum);
        }
        else{
            while(n<=m){
                printf("%d ",n);
                sum+=n;
                n++;
            }
            printf("sum=%d\n",sum);
        }

        }

    }
    return 0;

}
