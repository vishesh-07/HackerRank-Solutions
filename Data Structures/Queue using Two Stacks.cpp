#include <bits/stdc++.h>
using namespace std;
int main() {  
    int q;
    cin>>q;
    queue<int>a;
    while(q--){
        int ch;
        cin>>ch;
        if(ch==1){
            int x;
            cin>>x;
            a.push(x);
        }
        if(ch==2){
            a.pop();
        }
        if(ch==3){
            cout<<a.front()<<endl;
        } 
    }   
    return 0;
}
