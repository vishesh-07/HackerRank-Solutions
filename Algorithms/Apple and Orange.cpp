#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,t,a,b,m,n,aCount=0,bCount=0;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int>apple,orange;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        apple.push_back(a+x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        orange.push_back(b+x);
    }
    for(int i=0;i<m;i++){
        if(apple.at(i)>=s && apple.at(i)<=t){
            aCount++;
        }
    }
    for(int i=0;i<n;i++){
        if(orange.at(i)>=s && orange.at(i)<=t){
            bCount++;
        }
    }
    cout<<aCount<<"\n"<<bCount;
}
