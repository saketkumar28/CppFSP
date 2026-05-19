#include <bits/stdc++.h>
using namespace std;


//use unordered set please..
int main(){
    vector<int>v={1,2,3,1};
    map<int,int>mpp;
    int ans=0;
    int n=v.size();
    for (int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    for (auto it:mpp){
        if (it.second>1){
            ans=1;
            break;
        }
    }
    if (ans==1) cout<<"Has duplicates"<<endl;
    else cout<<"No duplicates"<<endl;
}