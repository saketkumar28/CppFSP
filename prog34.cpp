#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={450,7,8,60,8,99,8};
    int n=v.size();
    int ans=INT_MIN;
    int secondmax=-1;
    for (int i=0;i<n;i++){
        if (v[i]>ans){
            int temp=ans;
            ans=v[i];
            secondmax=temp;
        }
        else if (v[i]<ans && v[i]>secondmax){
            secondmax=v[i];
        }
    }
    cout<<ans<<endl;
    cout<<secondmax<<endl;
    return 0;
}