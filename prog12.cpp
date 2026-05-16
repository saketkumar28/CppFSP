//hybrid inheritance.
#include<iostream>
using namespace std;

class Parent{
    public :
    void teach(){
        cout<<"I teach.."<<endl;
    }
    void woof(){
        cout<<"I loof..";
    }
};

class child1: virtual public Parent{
    public :
    void woof(){
        cout<<"I meow...";
    }
};

class child2: virtual public Parent{
    public :
    void woof(){
        cout<<"I woof...";
    }
};

class child3:public child1,public child2{
    public :
    void bhoof(){
        cout<<"I bhoof.."<<endl;
    }
    void woof(){
        cout<<"Its my ownn.....";
    }
};

int main(){
  child3 obj;
  obj.bhoof();
  obj.teach();
obj.woof();
}