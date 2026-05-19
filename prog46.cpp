#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="(([}))";
    stack<char>st;
    int n=s.size();
    int i=0;
    while(i<n){
        if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
            i++;
        }
        else {
            if (st.empty()) {
                break;
            }
            if ((st.top()=='[' && s[i]==']') || (st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}')){
               st.pop();
               i++;
            }
            else{
               break;
            }
        }

    }
    cout<<(st.empty() && i==n)<<endl;
    return 0;
}