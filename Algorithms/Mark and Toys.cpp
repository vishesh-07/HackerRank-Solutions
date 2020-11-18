#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,k,c=0;
    cin>>n>>k;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<a.size();i++){
        if(a.at(i)<=k){
            c++;
            k-=a.at(i);
        }
    }
    cout<<c;
}
