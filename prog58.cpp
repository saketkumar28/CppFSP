#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,8,6,2,5,4,8,3,7};
    int n=v.size();
    int l=0;
    int r=n-1;
    int ansi=INT_MIN;
    int bl=-1;
    int br=-1;
    while(l<=r){
       int curra=(min(v[l],v[r]))*(r-l);
       if (curra>ansi){
        ansi=curra;
        bl=l;
        br=r;
       }
       if (v[l]<v[r]){
        l++;
       }
       else{
        r--;
       }
    }
    cout<<ansi<<endl;
     cout<<bl<<" "<<br<<endl;
}