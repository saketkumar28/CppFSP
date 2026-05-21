#include <bits/stdc++.h>
using namespace std;


int cs(int n){
    int f1=1;
    int f2=2;
    int f3;
    for (int i=3;i<=n;i++){
       f3=f1+f2;
       f1=f2;
       f2=f3;
   }
   return f3;
}
        
int main(){
   int ans=cs(8);
   cout<<ans<<endl;
}