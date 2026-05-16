#include <iostream>
using namespace std;

class A{
    public :
    int roll;
    string name;
    A(int roll,string name){
        this->roll=roll;
        this->name=name;
    }
    void dis(){
        cout<<"My name is "<<name<<"my roll is"<<roll;
    }
};

int main(){
    A obj(175,"Saket");
    obj.dis();
    return 0;
}