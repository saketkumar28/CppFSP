#include <bits/stdc++.h>
using namespace std;

int main(){
    int choice;
    cin>>choice;
    try{
    if (choice==1){
        throw 100;
    }
    else if (choice==2){
        throw 'a';
    }
    else {
        throw 5.5;
    }
}
    catch(int x){
        cout<<"Integer.."<<endl;
    }
    catch(char x){
        cout<<"character.."<<endl;
    }
     catch(double x){
        cout<<"double.."<<endl;
    }
}