#include <bits/stdc++.h>
using namespace std;
int main(){
    int p,d,m,s,c=0;
    cin>>p>>d>>m>>s;
    int cp=p;
    while(s>=cp){
        c++;
        s-=cp;
        cp = (cp - d) >= m ? cp - d : m;
    }
    cout<<c;
}
