#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,s;
        cin>>n>>m>>s;
        int temp=(s+m-1)%n;
        if(temp==0){
            cout<<n<<endl;
        }else{
            cout<<temp<<endl;;
        }
    }
}
