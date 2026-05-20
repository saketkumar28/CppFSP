#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,5,8,12,16,23,38,56,72};
    int n=v.size();
    int target=23;
    int low=0;
    int ans=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (v[mid]==target) {
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