#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,pairs=0;
    cin>>n;
    vector<int>a,b,c;
    vector<int>::iterator ip;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    ip=unique(b.begin(),b.end());
    b.resize(distance(b.begin(), ip)); 
    for(int i=0;i<b.size();i++){
        int x=0;
        for(int j=0;j<a.size();j++){
            if(b[i]==a[j]){
                x++;
            }
        }
        c.push_back(x);
    }
    for(int i=0;i<c.size();i++){
        if((c[i]%2==0) || (c[i]%2!=0 && c[i]!=1)){
         int x=(int)c[i]/2;
         pairs+=x;
        }
    }
    cout<<pairs;
}
