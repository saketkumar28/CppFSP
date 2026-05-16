#include <iostream>
using namespace std;

//method overriding...
class Animal{
    public :
    virtual void sound(){  //virtual used to override..
        cout<<"I make sound...";
      }
};

class Dog:public Animal{
    public:
    void sound(){
        cout<<"I bark...";
    }
};

int main(){
    Animal *obj1;
    Dog obj;
    obj1=&obj;
    obj1->sound();
    return 0;
}