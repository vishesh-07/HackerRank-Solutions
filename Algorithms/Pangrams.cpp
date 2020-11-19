#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<int>a(26,0);
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='A'){
            a[0]=1;
        }
        if(s[i]=='b' || s[i]=='B'){
            a[1]=1;
        }
        if(s[i]=='c' || s[i]=='C'){
            a[2]=1;
        }
        if(s[i]=='d' || s[i]=='D'){
            a[3]=1;
        }
        if(s[i]=='e' || s[i]=='E'){
            a[4]=1;
        }
        if(s[i]=='f' || s[i]=='F'){
            a[5]=1;
        }
        if(s[i]=='g' || s[i]=='G'){
            a[6]=1;
        }
        if(s[i]=='h'|| s[i]=='H' ){
            a[7]=1;
        }
        if(s[i]=='i' || s[i]=='I'){
            a[8]=1;
        }
        if(s[i]=='j' || s[i]=='J'){
            a[9]=1;
        }
        if(s[i]=='k' || s[i]=='K'){
            a[10]=1;
        }
        if(s[i]=='l' || s[i]=='L'){
            a[11]=1;
        }
        if(s[i]=='m' || s[i]=='M'){
            a[12]=1;
        }
        if(s[i]=='n' || s[i]=='N'){
            a[13]=1;
        }
        if(s[i]=='o' || s[i]=='O'){
            a[14]=1;
        }
        if(s[i]=='p' || s[i]=='P'){
            a[15]=1;
        }
        if(s[i]=='q' || s[i]=='Q'){
            a[16]=1;
        }
        if(s[i]=='r' || s[i]=='R'){
            a[17]=1;
        }
        if(s[i]=='s' || s[i]=='S'){
            a[18]=1;
        }
        if(s[i]=='t' || s[i]=='T'){
            a[19]=1;
        }
        if(s[i]=='u' || s[i]=='U'){
            a[20]=1;
        }
        if(s[i]=='v' || s[i]=='V'){
            a[21]=1;
        }
        if(s[i]=='w' || s[i]=='W'){
            a[22]=1;
        }
        if(s[i]=='x' || s[i]=='X'){
            a[23]=1;
        }
        if(s[i]=='y' || s[i]=='Y'){
            a[24]=1;
        }
        if(s[i]=='z' || s[i]=='Z'){
            a[25]=1;
        }
    }
    if (equal(a.begin()+1, a.end(), a.begin())){
    cout<<"pangram";
    }else{
        cout<<"not pangram";
    }
}
