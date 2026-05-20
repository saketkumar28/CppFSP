#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>deno={2000,500,200,100};
    int amt=3750;
    int n=deno.size();
    for (int i=0;i<n;i++){
        while(amt>=deno[i]){
            cout<<deno[i]<<endl;
            amt=amt-deno[i];
        }
    }
    if (amt!=0) cout<<"paisa khatam ho gya bhai..yar"<<endl;
}