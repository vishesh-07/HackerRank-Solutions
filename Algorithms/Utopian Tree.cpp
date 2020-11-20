#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i&1){
                x*=2;
            }else{
                x++;
            }
        }
        cout<<x<<endl;
    }
}
