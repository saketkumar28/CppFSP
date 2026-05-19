#include <bits/stdc++.h>
using namespace std;



class A{
    public :
    const char* what(){
        return "marks cant be negative..";
    }
};
int main(){
    int marks=-4;
    try{
        if (marks<0){
            throw A();
        }
    }
    catch(A a){
        cout<<a.what()<<endl;
    }
}