#include<stdio.h>
int main()
{
    int n;
    int i,a=0,b=1,sum;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=0;i<n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf(" %d",sum);
    }
    return 0;
}
