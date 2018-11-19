#include<stdio.h>
int main ()
{
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    if(x==1)
    {
      z=(float)4.00*y;
      printf("Total: R$ %.2f\n",z);
    }
        if(x==2)
    {
      z=(float)4.50*y;
      printf("Total: R$ %.2f\n",z);
    }
        if(x==3)
    {
      z=(float)5.00*y;
      printf("Total: R$ %.2f\n",z);
    }
        if(x==4)
    {
      z=(float)2.00*y;
      printf("Total: R$ %.2f\n",z);
    }
        if(x==5)
    {
      z=(float)1.50*y;
      printf("Total: R$ %.2f\n",z);
    }

    return 0;
}
