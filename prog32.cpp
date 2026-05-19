#include <bits/stdc++.h>
using namespace std;
//hash map and hasharray

int main(){
    vector<int>a={4,6,7,8,8,8,8,8,3,4,5,6};
    string s="Saketkumar";
    int hasharr[26]={0};
    int sz=s.size();
    int num=a.size();
    for (int i=0;i<sz;i++){
        hasharr[s[i]-'a']++;
    }
    for (int i=0;i<26;i++){
        cout<<hasharr[i]<<" ";
    }
    cout<<endl;
    unordered_map<int,int>mpp1;
    map<int,int>mpp2;
    for (int i=0;i<num;i++){
        mpp1[a[i]]++;
    }
     for (int i=0;i<num;i++){
        mpp2[a[i]]++;
    }
    for (auto it:mpp1){
        cout<<it.second<<" ";
    }
    cout<<endl;
    for (auto it:mpp1){
        cout<<it.second<<" ";
    }
    cout<<endl;
    return 0;
}