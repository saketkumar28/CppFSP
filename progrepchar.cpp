#include <bits/stdc++.h>
using namespace std;


//Whenever you need to track metadata alongside a maximum/minimum value (like tracking the index of the longest string, or the nodes of the shortest path), you have to drop std::max and go back to a standard if statement:
int main(){
    string s="abcdabcbb";
    int n=s.size();
    string ansi="";
    int i=0;
    int j=0;
    map<char,int>mpp;
    int ans=INT_MIN;
    int st=-1;
    while(j<n){
        mpp[s[j]]++;
        while((j-i+1) > mpp.size()){
            mpp[s[i]]--;
            if (mpp[s[i]]==0){
                mpp.erase(s[i]);
            }
            i++;
        }
        if ((j-i+1)>ans){
            ans=j-i+1;
            st=i;
        }
        j++;
    }
    cout<<ans<<endl;
    cout<<s.substr(st,ans)<<endl;
}