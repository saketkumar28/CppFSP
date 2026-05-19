#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={7,6,5,14};
    int minprice=INT_MAX;
    int maxprofit=0;
    int n=v.size();
    for (int i=0;i<n;i++){
        minprice=min(minprice,v[i]);
        maxprofit=max(maxprofit,v[i]-minprice);
    }
    cout<<maxprofit<<endl;
  //min/max take same time as if/else do..
}