#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={687,1,9005,46};
    for (auto it :v){
        cout<<it<<endl;
    }
    sort(v.begin(),v.end());
    for(auto it :v){
        cout<<it<<endl;
    }
   bool ans= binary_search(v.begin(),v.end(),46464);
   auto it=find_if(v.begin(),v.end(),[](int val){
    return val>10101;
   });
   if (it!=v.end()){
    cout<<"mil gya"<<endl;
   }
   else{
    cout<<"Nhi milaaa"<<endl;
   }

   auto it1=find(v.begin(),v.end(),687);
   if (it1!=v.end()) cout<<"mil gya baabyo.."<<endl;
   else cout<<"Nhi mila baabyo..."<<endl;

   int cnt= count(v.begin(),v.end(),4);
   int cnt1=count_if(v.begin(),v.end(),[](int num){
    return num>90;
   });
   cout<<cnt<<endl;
   cout<<cnt1<<endl;
   cout<<ans<<endl;

}