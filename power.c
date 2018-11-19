#include<stdio.h>
#include<math.h>
int main ()
{
    int x,y,p;
    printf("enter the value of base:");
    scanf("%d",&x);
    printf("Enter the value of power:");
    scanf("%d",&y);
    p=(float)pow(x,y);
    printf("power=%d\n",p);
    return 0;
}
