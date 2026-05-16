#include <iostream>
using namespace std;

//template<typename T>

//  T greateroftwo(T a,T b){
//      return (a>b ?  a : b);
//  }

 template<typename T>

 T swapp(T &a,T &b){
    T c;
    c=a;
    a=b;
    b=c;
 }

int main(){
   // cout<<greateroftwo(4,5);
    int a=5,b=6;
    cout<<a<<" "<<b<<endl;
    swapp(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
