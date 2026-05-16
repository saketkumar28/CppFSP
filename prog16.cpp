#include <iostream>
using namespace std;
//implementing abstract class..and virtual functions..

class students{
    public :
    virtual void study()=0;

};

class person:public students{
      public:
      void study() override{
        cout<<"I study..";
      }
};

int main(){
    person p;
    students *s=&p;
    s->study();
    //p.study();
    return 0;
}