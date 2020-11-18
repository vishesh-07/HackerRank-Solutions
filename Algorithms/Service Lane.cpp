#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    vector<int>a;
    for(int i=0;i<x;i++){
        int n;
        cin>>n;
        a.push_back(n);
    }
    while(y--){
        int i,j;
        cin>>i>>j;
        int min=a.at(i);
       for(int p=i+1;p<=j;p++){
           if(a.at(p)<min){
               min=a.at(p);
           }
       }
       cout<<min<<endl;
    }
    return 0;
}
