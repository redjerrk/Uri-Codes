#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1,h2,m1,m2,m,t;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4){
        if(h1<h2){
            t = h2-h1;
            t*=60;
            if (m1<m2){
                 m = m2-m1;
                t = t+m;

            }
            else if(m1>m2){
                m= 60-m1;
                m+=m2;
                t+=m;

            }

            cout<<t<<endl;
        }
        else if(h1>h2){
             t = (24-h1)+h2;
            t*=60;
             if (m1<m2){
                 m = m2-m1;
                t = t+m;

            }
            else if(m1>m2){
                m= 60-m1;
                m+=m2;
                t+=m;

            }
            cout<<t<<endl;

        }
        else{
            int t =24;
            t*=60;
            if (m1<m2){
                 m = m2-m1;
                t = t+m;

            }
            else if(m1>m2){
                m= 60-m1;
                m+=m2;
                t+=m;

            }
            cout<<t<<endl;

        }
        return 0;

    }
}
