#include <bits/stdc++.h>
using namespace std;


void merge(int low,int mid,int high,vector<int>&v){
      vector<int>temp;
      int left=low;
      int right=mid+1;
      while(left<=mid && right<=high){
             if (v[left]<=v[right]){
                temp.push_back(v[left]);
                left++;
             }
             else
             {
                temp.push_back(v[right]);
                right++;
             }
      }
      while(left<=mid){
        temp.push_back(v[left]);
        left++;
      }
       while(right<=high){
        temp.push_back(v[right]);
        right++;
      }
      for (int i=low;i<=high;i++){
        v[i]=temp[i-low];
      }
}
void mergesort(int low,int high,vector<int>&v){
         int mid=(low+high)/2;
         if (low>=high) return;
         mergesort(low,mid,v);
         mergesort(mid+1,high,v);
         merge(low,mid,high,v);
}
int main(){
    vector<int>v={8,3,5,4,7,6,1,2};
    int n=v.size();
    mergesort(0,n-1,v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}