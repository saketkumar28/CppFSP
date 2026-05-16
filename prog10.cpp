#include <iostream>
using namespace std;


//hierarchical
class college{
    public :
    void siksha(){
        cout<<"I gain siksha..";
    }
};

class student:public college{
    public :
    void study(){
        cout<<"I study";
}
};

class teacher:public college{
    public :
    void teach(){
        cout<<"I teach";
}
};

class accounts:public college{
    public :
    void treach(){
        cout<<"I treach";
    }
};

int main(){
    student obj1;
    teacher obj2;
    accounts obj3;
    obj1.study();
    obj2.teach();
    obj3.treach();
    return 0;

}