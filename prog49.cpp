#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,6};
    vector<int>ans;
    int n=v.size();
    int left=0;
    int right=n-1;
    int target=6;
    while(left<right){
       if (v[left]+v[right]==target){
        ans.push_back(left);
        ans.push_back(right);
        break;
       }
       else if (v[left]+v[right]>target){
        right--;
       }
       else{
        left++;
       }
    }
    for (int i=0;i<2;i++){
        cout<<ans[i]<<" "<<endl;
    }
}