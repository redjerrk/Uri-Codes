#include<stdio.h>
int main()
{
int a,b,t;
scanf("%d%d",&a,&b);
if(b-a<0){
        t=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else {
        t=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    return 0;
}
