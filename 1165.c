#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,flag,m;
    scanf("%d",&m);
    for(j=0;j<m;j++){
            flag=0;
        scanf("%d",&n);
        if(n==1 || n==2)
            printf("%d eh primo\n",n);
        else{
            for(i=2;i<=n/2;i++){
                if(n%i==0){
                    flag=1;
                    break;
                }
        }
        if(flag==0)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);
        }
    }
    return 0;
}
