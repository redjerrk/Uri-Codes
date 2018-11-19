#include<stdio.h>
int main()
{
    int i,n;
    int sum;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        sum=i*n;
        printf("%d x %d = %d\n",i,n,sum);
    }
    return 0;
}
