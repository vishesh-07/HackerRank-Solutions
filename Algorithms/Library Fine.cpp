#include <bits/stdc++.h>
using namespace std;
int main(){
    int d1,m1,y1,d2,m2,y2,f=0;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(y1==y2){
        if(m1==m2 && (d1>d2)){
            f=15*(d1-d2);
        }else if(m1>m2){
            f=500*(m1-m2);
        }
    }else if(y1>y2){
        f=10000;
    }
    cout<<f;
}
