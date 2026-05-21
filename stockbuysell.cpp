#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={7,1,5,3,6,4};
    int mini=INT_MAX;
    int n=v.size();
    int maxp=0;
    for (int i=0;i<n;i++){
         mini=min(mini,v[i]);
         maxp=max(maxp,v[i]-mini);
    }
    cout<<maxp<<endl;
}