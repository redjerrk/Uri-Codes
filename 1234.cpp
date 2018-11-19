#include<bits/stdc++.h>
#include<string>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    string s;
    int i,k;
    int j;
    while(getline(cin, s)){
            i=0,j=0;
        k =s.size();
        while(i<=k){
            if(s[i]!=' '){
                    j++;

                if(s[i]>='a' && s[i]<='z' && (j&1)){
                s[i]-=32;

            }
            else if(s[i]>='A' && s[i]<='Z' && !(j&1)){
                s[i]+=32;

            }

            }
            i++;


        }
        cout<<s<<endl;;
    }




    return 0;
}
