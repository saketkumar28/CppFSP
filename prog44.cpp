#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,5};
    try{
        cout<<v.at(10); 
    }
    catch(const *exception){
        cout<<"error..."<<exception<<endl;
    }
}