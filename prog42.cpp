#include <bits/stdc++.h>
using namespace std;

int main(){
    try{
        throw 10.7;    
    }
    catch(...){
        cout<<"unknown.."<<endl;
    }
}