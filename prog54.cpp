#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(23);
    pq.push(21);
    pq.push(2);
    pq.push(2888);
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
};
