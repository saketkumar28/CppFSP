#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n,val;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>val;
    //     v.push_back(val);
    // }
    vector<int>b,c;
    vector<int>a={1,2,3};
    // for (int i=0;i<3;i++){
    //     cout<<a[i]<<endl;
    // }
    for (auto it :a){
        cout<<it<<endl;
    }
    b.swap(a);
    b.push_back(123);
    b.push_back(1234);
    b.push_back(1235);
    b.pop_back();
    b.insert(b.begin()+2,7);
    b.assign(6,125);
    b.erase(b.begin()+2);

    for (auto it:b){
        cout<<it<<endl;
    }
    //  for (auto it:c){
    //     cout<<it<<endl;
    // }
    cout<<a.size()<<endl;
}