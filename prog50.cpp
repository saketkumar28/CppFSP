#include <bits/stdc++.h>
using namespace std;

pair<int,int> func(vector<int>&v,int target){
    int n=v.size();
    int left=0;
    int right=n-1;
    while(left<right){
        if (v[left]+v[right]==target){
            return {left,right};
        }
        else if (v[left]+v[right]>target){
            right--;
        }
        else{
            left++;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int>v={1,2,3,4,6};
    pair<int,int>p=func(v,6);
    cout<<p.first<<" "<<p.second;
}