#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ="adobecodebanc";
    string t ="abc";
    int n = s.size();
    map<char, int> mppT;
    for (char c : t) {
        mppT[c]++;
    }
    int required = mppT.size(); 
    int formed = 0; 
    map<char, int> mppS;
    int i = 0, j = 0;
    int ans=INT_MAX; 
    int st = 0;
    while (j < n) {
        char c = s[j];
        mppS[c]++;
        if (mppT.count(c) && mppS[c] == mppT[c]) {
            formed++;
        }
        while (i <= j && formed == required) {
            if (j - i + 1 < ans) {
                ans= j - i + 1;
                st = i;
            }
            char leftChar = s[i];
            mppS[leftChar]--;
            if (mppS[leftChar] < mppT[leftChar]) {
                formed--;
            }
            i++;
        }
        j++; 
    }
    
    if (ans==INT_MAX) {
        cout << "not found.." << endl;
    } else {
        cout<<s.substr(st,ans) << endl; 
    }
    
    return 0;
}