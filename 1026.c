#include<stdio.h>
int main()
{
    unsigned int long a,b;
    while(scanf("%lu%lu",&a,&b)!=EOF){
       unsigned int long c=a^b;
        printf("%lu\n",c);
    }
    return 0;
}
