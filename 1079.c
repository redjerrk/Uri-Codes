#include<stdio.h>
int main()
{
    int n,i;
    float a1,a2,a3,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f%f%f",&a1,&a2,&a3);
        avg=(a1*2+a2*3+a3*5)/10;
        printf("%.1f\n",avg);
    }
    return 0;

}
