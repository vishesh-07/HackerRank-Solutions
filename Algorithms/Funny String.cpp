#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        bool f=true;
        string rev=string(str.rbegin(),str.rend());
        vector<int>a1,a2;
        for(int i=0;i<rev.length()-1;i++){
            a1.push_back(abs(int(str[i])-str[i+1]));
            a2.push_back(abs(int(rev[i])-rev[i+1]));
        }
        for(int i=0;i<a1.size();i++){
            if(a1.at(i)!=a2.at(i)){
                cout<<"Not Funny"<<endl;
                f=false;
                break;
            }
        }
        if(f==true)
        cout<<"Funny"<<endl;
    }
    return 0;
}
