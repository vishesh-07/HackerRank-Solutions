#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,c=0;
    vector<int>a;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(a.at(j)-a.at(i)==d){
            for(int k=j+1;k<n;k++){
               if(a.at(k)-a.at(j)==d){
                   c++;
               }
            }
           }
          
       } 
    }
    cout<<c;      
    return 0;
}
