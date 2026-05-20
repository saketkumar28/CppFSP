#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,4,1,6,3};
    int n=v.size();
    vector<int>prefixsum(n,0);
    prefixsum[0]=v[0];
    for (int i=1;i<n;i++){
       prefixsum[i]=prefixsum[i-1]+v[i];
    }
    //printing prefixsum
    // for (int i=0;i<n;i++){
    //     cout<<prefixsum[i]<<" "<<endl;
    // }
    int L=1;
    int R=3;
   cout<<prefixsum[R]-prefixsum[L-1];
}