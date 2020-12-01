#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,L=0,R=0;
    cin>>n>>p;
    for(int i=1;i<=p;i++){
        if(!(i&1)){
            L++;
        }
    }
    for(int i=n;i>p;i--){
        if(!(i&1)){
            R++;
        }
    }
    cout<<min(L,R);
}
