#include <bits/stdc++.h>
using namespace std;
//dp problem..
int main(){
   vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    int ans=INT_MIN;
    int n=v.size();
    int sum=0;
    for (int i=0;i<n;i++){
       sum=sum+v[i];
       ans=max(ans,sum);
       if (sum<0){
        sum=0;
       }
    }
    cout<<ans<<endl;
}