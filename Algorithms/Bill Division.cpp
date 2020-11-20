#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,charged,sum=0;
    cin>>n>>k;
    vector<int>bill;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        bill.push_back(x);
        if(i!=k){
            sum+=x;
        }
    }
    cin>>charged;
    if((sum/2)==charged){
        cout<<"Bon Appetit";
    }else{
        cout<<charged-(sum/2);
    }
}
