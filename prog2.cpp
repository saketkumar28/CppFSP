#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;
namespace a {
    int x=99;
}
namespace b {
    int x=100;
}

int main(){
    string s;
    cout<<"please enter name : ";
    //cin>>s;
    getline(cin,s);
    cout<<s;
    cout<<a::x<<endl;
    cout<<b::x<<endl;
}