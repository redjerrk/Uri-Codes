#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    double a[12][12],sum =0,n;
    char x;
    while(sf("%c",&x)!=EOF){
        for(int i=0; i<12; i++){
            for(int j=0; j<12; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<12; i++){
            for(int j=n; j<12; j++){
                sum+=a[i][j];

            }
            n++;
        }
        if(x == 'S')
            pf("%.1lf\n",sum);
        else if(x == 'M')
            pf("%.1lf\n",sum/66.0);
    }




    return 0;
}

