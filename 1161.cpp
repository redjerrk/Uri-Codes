#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;
long long  fact(long long n)
{
    long long f;
    if(n<=1){
        return 1;
    }
    else{
         f = n*fact(n-1);
        return f;
    }
}

int main()
{
    long long a,b,c=0,d=0;
    while(sf("%lld %lld",&a,&b)!=EOF){
        c = fact(a);
        d = fact(b);
        long long v =c+d;
        cout<<v<<endl;
    }




    return 0;
}
