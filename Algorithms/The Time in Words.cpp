#include <bits/stdc++.h>
using namespace std;
string hourToWord(int h){
    vector<string>hour;
    hour={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    return hour.at(h-1);
}
string minToWord(int m){
    vector<string>min;
     min={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
     return min.at(m-1);
}
int main(){
    int h,m;
    cin>>h>>m;
     string hour=hourToWord(h);
    if(m==0){
        cout<<hour<<" o' clock";
    }else if(m==15){
        cout<<"quarter past "<<hour;
    }
    else if(m<30){
        string min=minToWord(m);
        if(m==1){
            cout<<min<<" minute past "<<hour;
        }else{
            cout<<min<<" minutes past "<<hour;
        }
    }else if(m==30){
        cout<<"half past "<<hour;
    }
    else{
        string hour=hourToWord(h+1);
        string min=minToWord(60-m);
        if(m==45){
            cout<<"quarter to "<<hour;
        }else{
            cout<<min<<" minutes to "<<hour;
        }
    }
}
