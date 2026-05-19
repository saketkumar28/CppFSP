#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={45,7,8,60,8,99,8};
    int n=v.size();
    int ans=INT_MIN;
    for (int i=0;i<n;i++){
        if (v[i]>ans) ans=v[i];
    }
    cout<<ans<<endl;
    return 0;
}