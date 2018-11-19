#include<bits/stdc++.h>
#define pf printf
#define sf scanf
int  a[10000];


using namespace std;

int main()
{
    int n;
    bool k = true;
    while(sf("%d",&n)!=EOF){
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        if(n==2 && a[0]==a[1]){
            k =false;
        }
        else
    {
        for(int i=2; i<n; i++)
        {
            if(a[i] >= a[i-1] && a[i-1] >= a[i-2])
            {
                k =false;
                break;
            }
            else if(a[i] <= a[i-1] && a[i-1] <= a[i-2])
            {
                k = false;
                break;
            }
        }
    }


        if(k == true){
            cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;

        }







    return 0;
}

