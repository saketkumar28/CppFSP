//multilevel inheritance

#include <iostream>
using namespace std;

class human{
    public:
    void walk(){
        cout<<"I walk"<<endl;
    }
};

class person:public human{
    public:
    void run(){
        cout<<"I run"<<endl;
    }
};

class student:public person{
    public:
    void study(){
        cout<<"I study"<<endl;
    }
};

int main(){
    student obj;
    obj.run();
    obj.walk();
    obj.study();
    return 0;
}