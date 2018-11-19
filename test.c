#include<stdio.h>

/*int func(int x){
    if(x<10)
        return (x--);
    else
        return func(x++);

}*/
int main(){
    int x=9;
    printf("%d\n",x++);
    printf("%d",x++);
    return 0;

}
