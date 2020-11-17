#include<iostream>
using namespace std;
int m(int ,int ,int ,int);
int main() {
    int a, b, c, d,max;
    cin>>a>>b>>c>>d;
    max=m(a,b,c,d);
       cout<<max;
return 0;
}
int m(int i,int j,int k,int l){
    int max1=0;
        if(i>j && i>k && i>l){
            max1=i;
        }else if(j>i && j>k && j>l){
            max1=j;
        }else if(k>i && k>j && k>l){
           max1=k;
        }else if(l>i && l>k && l>j){
             max1=l;
        }
        return max1;
}
