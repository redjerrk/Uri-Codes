#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define  maxx 20000
int a[maxx];

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        a[x]++;
    }

    for(int i=0; i<maxx; i++){
        if(a[i]!=0){
            cout<<i<< " aparece "<<a[i]<<" vez(es)"<<endl;
        }
    }





    return 0;
}
