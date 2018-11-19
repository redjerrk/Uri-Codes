#include<stdio.h>
int main()
{
    int i,a,b,a1,a2,n;
    while(scanf("%d%d%d",&n,&a1,&a2)!=EOF){
            a=0;
        for(i=0;i<n;i++){
            scanf("%d",&b);
            if(b>=a1 && b<=a2)
                a++;
        }
        printf("%d\n",a);
    }
}
