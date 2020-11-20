#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max=INT_MAX;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a.at(i+1)-a.at(i)<max){
            max=a.at(i+1)-a.at(i);
        }
    }
    cout<<max;
}
