#include<stdio.h>
int main ()
{
    int ce,fr,c,f;
    printf("Enter in Celsius:");
    scanf("%d",&ce);
    fr=(9*ce)/5+32;
    printf("Fahrenheit: %d\n",fr);
    printf("Enter in Fahrenheit:");
    scanf("%d",&f);
    c=5*(f-32)/9;
    printf("Celsius: %d\n",c);
    return 0;
}
