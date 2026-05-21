//reading the binary file 
#include<bits/stdc++.h>
using namespace std ; 

struct Data
{
    int id ; 
    float value ; 
};

int main (){
    Data myData = {1,99.5f} ; 
    ofstream outFile("Data.bin",ios::binary) ; //telling that the file is binary 
    //instead of cout and cin we use write and close
    if(outFile.is_open()){
        outFile.write(reinterpret_cast<char *>(&myData),sizeof(myData));
        outFile.close() ; 
    }
    //reading the file 
    Data incomingData ; 
    ifstream inFile ("data.bin", ios::binary) ; 
      if(inFile.is_open()){
        inFile.read(reinterpret_cast<char *>(&incomingData),sizeof(incomingData));
        inFile.close() ;  
        cout << "ID: " <<incomingData.id<<", Value: " <<incomingData.value<<std::endl;  

    }


   

    return 0 ; 
}