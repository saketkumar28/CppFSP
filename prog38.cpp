#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    st.insert(34);
    st.insert(4);
    st.insert(34);
    st.insert(340);
    st.insert(345);
    st.insert(345);
   // st.erase(340);
    cout<<st.size()<<" "<<st.count(345)<<endl;
    auto it = st.find(340);
    if (it != st.end()) cout <<"Mil gya..."<< *it << endl;
    else cout << "not found" << endl;
    for (auto it :st){
        cout<<it<<endl;
    }
}