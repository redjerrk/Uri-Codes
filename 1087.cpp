#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;

int main()
{
    int x1, x2, y1, y2,c,d;
    while(1){
        cin>>x1>>y1>>x2>>y2;

        if(x1 == 0 && x2== 0 && y1==0 && y2 ==0 ){
            break;

        }
        if(x1 == x2 && y1 == y2) {
            cout<<"0"<<endl;
        }
        else if(x1 == x2 || y1 == y2){
                cout<<1<<endl;

            }
        else{
            if(x1 > x2){
            c = x1- x2;

        }
        if(y1 > y2){
            d = y1 - y2;
        }
        if(x2>x1){
            c = x2- x1;


        }
        if(y2>y1){
            d = y2 - y1;
        }
        if(c ==d){
            cout<<"1"<<endl;
        }
        if(c!=d){
            cout<<"2"<<endl;
        }

        }






    }




    return 0;
}

