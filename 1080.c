#include<stdio.h>
int main()
{
    int a[100],i;
    int position;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++){
        if(a[0]<a[i+0]){
            a[0]=a[i+0];
            position=i+1;
        }

    }
    printf("%d\n",a[0]);
    printf("%d\n",position);
    return 0;
}
