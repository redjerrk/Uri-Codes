#include<stdio.h>
int main()
{
    int i,n,a=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0)
            a++;
    }
    printf("%d valores pares\n",a);
    return 0;

}
