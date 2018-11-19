#include<stdio.h>
int main()
{
    int i,m1,d1,d2,h1,s1,m2,h2,s2;
    char da1,da2;
    scanf("%s",&da1);
    scanf("%d",&d1);
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%s",&da2);
    scanf("%d",&d2);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    int total1,total2;
    total1=(d1*86400)+(h1*3600)+(m1*60)+s1;
    total2=(d2*86400)+(h2*3600)+(m2*60)+s2;
    int total;
    total = total2-total1;

    int dx,hx,mx,sx;
    if(total>=60){
        dx=(total/86400);
        hx=(total%86400)/3600;
        mx=(total%86400)%3600/60;
        sx=(total%86400)%3600%60;
        printf("%d dia(s)\n",dx);
        printf("%d hora(s)\n",hx);
        printf("%d minuto(s)\n",mx);
        printf("%d segundo(s)\n",sx);

    }
    else
        printf("%d segundos(s)\n",total);
    return 0;


}
