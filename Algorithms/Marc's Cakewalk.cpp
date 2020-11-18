#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,sum=0;
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),greater<ll>());
    for(ll i=0;i<n;i++){
        sum+=(pow(2,i)*a.at(i));
    }
    cout<<sum;
}
