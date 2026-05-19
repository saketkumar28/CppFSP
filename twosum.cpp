#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,7,11,13};
    int target=15;
    int n=v.size();
    vector<int>ansind;
    vector<int>ansnum;
    map<int,int>mpp;
    for (int i=0;i<n;i++){
        int rem=target-v[i];
        if (mpp.find(rem)!=mpp.end()){
             ansind.push_back(i);
             ansind.push_back(mpp[rem]);
        }
        else{
            mpp[v[i]]=i;
        }
    }
    for (int i=0;i<2;i++){
        cout<<ansind[i]<<endl;
    }
    return 0;

return 0;

}