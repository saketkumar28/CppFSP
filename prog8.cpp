#include <iostream>
using namespace std;

class myclass{
    public :
    int roll;
    string name;
    myclass(int r,string s){
    roll=r;
    name=s;
  }
   ~myclass(){
     cout<<"Destructor called...";
  }
    void display(){
       cout<<roll<<" "<<name<<endl;
    }

};


int main(){
    myclass obj(175,"Saket");  //destructor is called automatically...
    myclass* obj1=new myclass(136,"queen");  
    obj.display();
    obj1->display();
    //delete(obj1);
    return 0;
}