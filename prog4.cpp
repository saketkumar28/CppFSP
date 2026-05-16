#include <iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for (int i=n;i>=1;i--){
        ans=ans*i;
}
}

int main(){
    int ansi=factorial(5);
    cout<<ansi<<endl;
    return 0;
}