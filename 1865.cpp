#include<iostream>
#include<string.h>


using namespace std;
int main()
{

    int n;
    string a= "Thor";
    cin>>n;
    for(int i=0;i<n;i++){
        string b;
        int po;
        cin>>b>>po;
        if(b==a)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }
}
