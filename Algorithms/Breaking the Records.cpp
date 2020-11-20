#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,minCount=0,maxCount=0;
    cin>>n;
    vector<int>score;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        score.push_back(x);
    }
    int min=score.at(0),max=score.at(0);
    for(int i=1;i<n;i++){
        if(score.at(i)<min){
            minCount++;
            min=score.at(i);
        }
        if(score.at(i)>max){
            maxCount++;
            max=score.at(i);
        }
    }
    cout<<maxCount<<" "<<minCount;
}
