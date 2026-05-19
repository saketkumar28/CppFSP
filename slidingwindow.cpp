#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,1,5,1,3,2};
    int n=v.size();
    int k=3;
    int i=0;
    int j=0;
    int ans=INT_MIN;
    int sum=0;
    int cnt=0;
    while(j<n){
       sum=sum+v[j];
       cnt++;
       while(cnt>k){
        sum=sum-v[i];
        i++;
        cnt--;
       }
       if (cnt==k){
       ans=max(ans,sum);
       }
       j++;
    }
    cout<<ans<<endl;
}