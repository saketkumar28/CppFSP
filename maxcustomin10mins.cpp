#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,4,1,6,8,-6};
    int n=v.size();
    int ans=INT_MIN;
    int i=0;
    int j=0;
    int k=3;
    int sum=0;
    while(j<n){
       sum=sum+v[j];
       while(j-i+1>k){
        sum=sum-v[i];
        i++;
       }  
       if ((j-i+1)==k){
        ans=max(ans,sum);
       }
       j++;
    }
    cout<<ans<<endl;
}
   //241683