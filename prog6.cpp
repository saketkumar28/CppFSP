#include <iostream>
using namespace std;

class myclass{
    public: 
    int x=10;
    string name="Aec";
    void display(){
        cout<<x<<endl;
        cout<<name<<endl;
    }
};

int main(){
    myclass A; //stack mein store hoga no need to delete memory.
    A.display();
    myclass* B=new myclass(); //need to delete it
    B->display();
    delete(B);
     B->display();
    return 0;

}