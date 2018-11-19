#include<stdio.h>
int main()
{
    int n[1000],t,i,a=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        n[i]=a;
        a++;
        if(a==t){
            a=0;
        }

    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
