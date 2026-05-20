//chocolate wrapper problem
#include <bits/stdc++.h>
using namespace std;

int choco(int money,int cost,int warapper){
    // int choc=money/cost;
    // int wrap=choc;
    // while(wrap>=warapper){
    //     int freechoc=wrap/warapper;
    //     choc=choc+freechoc;
    //     wrap=freechoc+(wrap%warapper);
    // }
    int inichoc=money/cost;
    if (inichoc==0) return 0;
    return inichoc=inichoc+(inichoc-1)/(warapper-1);
}
int main(){
    int money,cost,wrapper;
    cout<<"Enter money,cost,wrapper"<<endl;
    cin>>money>>cost>>wrapper;
    int ans=choco(money,cost,wrapper);
    cout<<ans<<endl;
    return 0;

}