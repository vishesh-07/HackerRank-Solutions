#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a.at(i)+a.at(j)==m){
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
        }
    }
}
