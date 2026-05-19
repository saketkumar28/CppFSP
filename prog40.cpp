#include <bits/stdc++.h>
using namespace std;


int main(){
    try{
        int age=-5;
        if (age<0){
            throw age;
        }
    }
    catch(int x){
    cout<<"invalid age"<<endl;
    } 
    return 0;
}