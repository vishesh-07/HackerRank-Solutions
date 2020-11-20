#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    vector<int>a(5);
    for(int i=0;i<n;i++){
        int x;
        cin >>x;
        a.at(x-1)+=1;
    }
    for(int i=1 ; i<5 ; i++){
        if(a.at(i)>a.at(max)){
          max=i;  
        } 
    }
    cout<<max+1;
}
