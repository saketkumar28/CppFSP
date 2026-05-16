#include <iostream>
using namespace std;
//encapsulation....
class A{
    private:
    int roll;
    string name;
    string dept;
    public :
    int getroll(){
        return this->roll;
    }
    string getname(){
        return this->name;
    }
    string getdept(){
        return this->dept;
    }
    void setroll(int roll){
        this->roll=roll;
    }
    void setname(string name){
        this->name=name;
    }
     void setdept(string dept){
        this->dept=dept;
     }
};

int main(){
    A obj;
    obj.setname("Saket");
    obj.setroll(175);
    obj.setdept("Cse");
    cout<<obj.getname()<<endl<<obj.getroll()<<endl<<obj.getdept()<<endl;
    return 0;
}