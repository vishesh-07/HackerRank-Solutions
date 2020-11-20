#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,onTime=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=0){
                onTime++;
            }
        }
        if(k<=onTime){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
