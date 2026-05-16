#include <iostream>
using namespace std;
//generic type...
template <typename T>
T func(T a,T b){
    return a+b;
}
int main(){
    cout<<func(10.5,20.6);
    return 0;
}
