#include <iostream>
using namespace std;

namespace area{
    double calarea(double l,double b){
        return l*b;
    }
}

namespace peri{
    double calperi(double l,double b){
        return 2*(l+b);
    }
}


namespace dept{
    namespace stud{
        int a=25;
    }
}
int main(){
    double a1,p1;
    a1=area::calarea(10.0,20.00);
    p1=peri::calperi(10.0,20.0);
    cout<<"Area :"<<a1<<endl;
    cout<<"Perimeter :"<<p1<<endl;
    cout<<dept::stud::a<<"";
    return 0;
}