#include <iostream>
using namespace std;

class par{
    public: 
    string st;
    par(string s){
       st=s;
       cout<<"In parent constructor."<<endl;
    }
    string name="AEc";
    void display(){
        cout<<st<<endl;
    }
};

class chi: public par {
    public:
    chi(string s):par(s){     //constructor inheritance...
        cout<<"child constructor called"<<endl;
    }
    void show(){
        cout<<"Hi saket bro..mr child"<<endl;
    }
    
};

int main(){
   chi obj("Saket");
   obj.show();
   obj.display();
   return 0;
}
