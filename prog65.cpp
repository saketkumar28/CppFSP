#include <bits/stdc++.h>
using namespace std;
//threads...doing shit with mutex

int cnt=0;
mutex mtx;
void inc(){
  for (int i=0;i<10000;i++){
    mtx.lock();
    cnt++;
    mtx.unlock();
  }
}

int main(){
    thread t1(inc);
    thread t2(inc);
    t1.join();
    t2.join();
    cout<<cnt<<endl;
}