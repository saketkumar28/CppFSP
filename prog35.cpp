#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>curr={2000,500,100,50,10,5,2,1};
    int amount=27589;
    int n=curr.size();
    for (int i=0;i<n;i++){
        while(amount>=curr[i]){
            amount=amount-curr[i];
            cout<<curr[i]<<endl;
    }
    }
    return 0;
}