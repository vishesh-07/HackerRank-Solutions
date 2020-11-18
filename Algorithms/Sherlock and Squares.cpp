#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c=0;
        cin>>a>>b;
        for(int i=1;;i++){
            if(i*i<=b && i*i>=a){
                c++;
            }
            if(i*i>b){
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
