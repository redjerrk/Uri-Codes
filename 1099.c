#include<stdio.h>
int main()
{
    int n,x,y,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        scanf("%d%d",&x,&y);
        if(x<y){
            if(x%2==0){
                x+=1;
                while(x<y){
                   sum+=x;
                   x+=2;
                }
            }
            else{
                x+=2;
                while(x<y){
                    sum+=x;
                    x+=2;
                }
            }
           }
           else{
            if(y%2==0){
                y+=1;
                while(y<x){
                    sum+=y;
                    y+=2;
                }
            }
            else{
                y+=2;
                while(y<x){
                    sum+=y;
                    y+=2;
                }
            }
           }
           printf("%d\n",sum);
        }

    return 0;
}
