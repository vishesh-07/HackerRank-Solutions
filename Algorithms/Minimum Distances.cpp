#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=-0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a.at(i)==a.at(j)){
               b.push_back(abs(i-j));
            }
        }
    }
    if(b.size()==0){
        cout<<"-1";
    }else{
        cout<<*min_element(b.begin(),b.end());
    }
}
