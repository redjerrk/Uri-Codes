#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    double n, sum =0;
    int i =0;
    char a;
    string s;
    while(getline(cin, s)){
        cin>>n;
        a = getchar();
        sum+=n;
        i++;
    }
    double v = sum/i;
    cout<<fixed<<setprecision(1)<<v<<endl;





    return 0;
}

