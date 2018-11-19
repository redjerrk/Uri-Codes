#include<stdio.h>
int main()
{
    int i,a,b;
    while(1){
        scanf("%d%d",&a,&b);
        if(a==b)
            break;
        else{
            if(a>b)
                printf("Decrescente\n");
            else
                printf("Crescente\n");
        }
    }
}
