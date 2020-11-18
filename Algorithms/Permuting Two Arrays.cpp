#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        vector<ll>a;
        vector<ll>b;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        int c=0;
        for(int i=0;i<n;i++){
            if(a.at(i)+b.at(i)<k){
                c=-1;
                break;
            }
        }
        if(c==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
