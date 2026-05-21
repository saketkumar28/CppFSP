#include <bits/stdc++.h>
using namespace std;

int main(){
    // ofstream outfile("example.txt");
    // if (outfile.is_open()){
    //     outfile<<"writing data..";
    // }
    // outfile.close();

    // string line;
    // ifstream infile("example.txt");
    // if (infile.is_open()){
    //     while(getline(infile,line)){
    //         cout<<line<<endl;
    //     }
    //     infile.close();
    // }
    ofstream outfile("example.txt",ios::app);
    if (!outfile){
        cout<<"error"<<endl;
    }
    outfile<<"file appended"<<endl;
    outfile.close();
}

