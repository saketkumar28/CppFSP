#include <bits/stdc++.h>
using namespace std;
//threads...doing shit without synchronisation..

int cnt=0;
void inc(){
  for (int i=0;i<10000;i++){
    cnt++;
  }
}

int main(){
    thread t1(inc);
    thread t2(inc);
    t1.join();
    t2.join();
    cout<<cnt<<endl;
}