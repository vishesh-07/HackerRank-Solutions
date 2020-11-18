#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i+=3){
        if(s[i]!='S'){
            c++;
        }
    }
    for(int i=1;i<s.length();i+=3){
        if(s[i]!='O'){
            c++;
        }
    }
    for(int i=2;i<s.length();i+=3){
        if(s[i]!='S'){
            c++;
        }
    }
    cout<<c;
    return 0;
}
