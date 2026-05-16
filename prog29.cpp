#include <bits/stdc++.h>
using namespace std;


int main(){
  deque<int>dq;
  dq.push_front(45);
  dq.push_back(56);
//   for (auto it:dq){
//     cout<<it<<endl;
//   }
  //dq.pop_back();
  dq.pop_front();
   for (auto it:dq){
    cout<<it<<endl;
  }
  cout<<dq.size();
}