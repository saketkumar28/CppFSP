#include <iostream>
using namespace std;

// operator overloading
class Complex{
public:
    int real, img;

    Complex(int r=0, int i=0)
    { 
        real = r; img = i; 
    }

    Complex operator+(Complex obj){
        Complex temp(0,0);
        temp.real=real+obj.real;
        temp.img=img+temp.img;
        return temp;
    }

    void display() {
        cout << real << " " << img << endl;
    }
};

int main(){
    Complex obj1(3,5);
    Complex obj2(4,5);
    Complex sum = obj1 + obj2;
    sum.display();
    return 0;
}