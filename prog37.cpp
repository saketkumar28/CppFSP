#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,4,5,6,7,8,90};
    int n=v.size();
    int low=0;
    int target=8;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (v[mid]==target){
            ans=mid;
            break;
        }
        else if (v[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}