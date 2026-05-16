#include <bits/stdc++.h>
using namespace std;


int main(){
  list<int>ls={34,6789,78,9,7,57};
    
//    for (auto it:ls){
//     cout<<it<<endl;
//   }
  auto it=ls.begin();
   ls.insert(it,99999);
  cout<<ls.front()<<endl;
  cout<<ls.back()<<endl;
  cout<<ls.size()<<endl;
  ls.sort();
  for (auto it :ls){
    cout<<it<<endl;
  }
}