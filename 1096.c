#include<stdio.h>
int main()
{
    double i,j;
    for(i=0;i<2.1;i+=0.2){
        for(j=1;j<4;j++){
            if(i>=0.1 && i<=0.9 || i>=1.1 && i<=1.9)
                printf("I=%0.1lf J=%0.1lf\n",i,j+i);
            else
                printf("I=%0.0lf J=%0.0lf\n",i,j+i);
        }
    }
    return 0;
}
