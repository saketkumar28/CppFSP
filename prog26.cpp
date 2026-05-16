#include <iostream>
#include <string> // Added to properly support strings
using namespace std;

template <class T1, class T2>

void show(T1 a,T2 b){
    cout<<a<<" "<<b<<endl;
}

int main(){
    show(10,"Saket");
    show("jimmy",9899);
    return 0;
}