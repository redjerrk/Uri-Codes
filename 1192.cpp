#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    int n,x,c,d;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        c = s[0]-'0';
        d =s[2]-'0';
        if(s[0]==s[2]){

            cout<<c*d<<endl;
        }
        else{
            if(s[1]>='a' && s[1]<='z'){
               cout<<c+d<<endl;
            }
            else if(s[1]>='A' && s[1]<='Z'){
                cout<<d-c<<endl;;
            }

        }
    }




    return 0;
}
