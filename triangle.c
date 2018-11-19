#include<stdio.h>
int main()
{
   double a,b,c,pe,ar;
   scanf("%lf%lf%lf",&a,&b,&c);
   if(a+b>c && b+c>a && c+a>b){
    pe=a+b+c;
    printf("Perimetro = %.1lf\n",pe);
   }
   else{
    ar=1.0/2*((a+b)*c);
    printf("Area = %.1lf\n",ar);
   }
   return 0;
}
