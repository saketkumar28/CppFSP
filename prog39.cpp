#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    int b=0;
    try{
        if (b==0){
            throw "division by zero..";
        }
        cout<<a/b<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}