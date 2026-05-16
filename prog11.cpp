//multiple.

#include <iostream>
using namespace std;

class father{
    public :
    void strict(){
        cout<<"I am strict...";
    }
};

class mother{
    public :
    void soft(){
        cout<<"I am soft...";
    }
};

class child:public father, public mother{
    public :
    void hoft(){
        cout<<"I am hoft...";
    }
};

int main(){
    child obj;
    obj.hoft();
    obj.soft();
    obj.strict();
    return 0;
}