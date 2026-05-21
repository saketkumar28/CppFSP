#include <bits/stdc++.h>
using namespace std;

class Ins{
    int x;
    public :
    Ins(int a){
        x=a;
    }
    int operator <<(Ins I){
        return (x+I.x);
    }
};

int main(){
    Ins obj1(3);
    Ins obj2(4);
    cout<<(obj1<<obj2)<<endl;
}