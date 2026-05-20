#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,2,1,5,6,4};
    int n=v.size();
    int k=2;
    int ans=0;
    priority_queue<int>pq;
    for (int i=0;i<n;i++){
      pq.push(v[i]);
    }
    int cnt=0;
    while(!pq.empty()){
        cnt++;
        if (cnt==k){
        ans=pq.top();
        break;
        }
        pq.pop();

    }
    cout<<ans<<endl;
}