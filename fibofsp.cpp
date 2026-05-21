#include <bits/stdc++.h>
using namespace std;


int fibo(int n){
    int f0=0;
    int f1=1;
    int f2;
    if (n<=1) return n;
    for (int i=2;i<=n;i++){
       f2=f1+f0;
       f0=f1;
       f1=f2;
   }
   return f2;
}
        
int main(){
   int n;
   cin>>n;
   int ans=fibo(n);
   cout<<ans<<endl;
}