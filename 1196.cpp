#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char a;
    int i=0;

    while(sf("%c",&a)!= EOF){
        for(int i=0; i<s.size(); i++){
            if(a == s[i]){
            cout<<s[i-1];
            break;

        }
        else if(a == ' '){
            cout<<" ";
            break;
        }
        else if(a == '\n'){
           cout<<"\n";
            break;
        }

        }
    }




    return 0;
}
