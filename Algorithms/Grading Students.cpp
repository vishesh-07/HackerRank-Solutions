#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int g;
        cin>>g;
        if(g<38){
            cout<<g<<endl;
        }else{
            int x=g;
            while(x%5!=0){
                x++;
            }
            if(x-g<3){
                cout<<x<<endl;
            }else{
                cout<<g<<endl;
            }
        }
    }
}
