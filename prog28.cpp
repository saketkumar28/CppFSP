#include <iostream>
using namespace std;

int main(){
    // pair<int,int>p={2,6};
    // pair<int,int>p1={2,6};
    pair<string,pair<int,int>>p2;
    p2={"Saket",{30,20}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<" "<<p2.second.second<<endl;
    return 0;
    // p1.first=34;
    // p1.second=56;
    // cout<<p.first<<endl;
    // cout<<p.second;
    // return 0;

}
