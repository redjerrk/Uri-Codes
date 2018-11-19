#include<stdio.h>
int main ()
{
    int d,y,w,da;
    printf("Enter Age in Days:");
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    da=(d%365)%7;
    printf("%d years :%d weeks :%d days\n",y,w,da);
    return 0;
}
