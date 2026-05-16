#include <iostream>
#include <string> // Added to properly support strings
using namespace std;

template <typename T, typename U>
class student {
private:
    T roll;
    U name;

public:
    student(T r, U n) {
        roll = r;
        name = n;
    }
    T getroll() {
        return roll; 
    }
    U getname() {
        return name; 
    }
};

int main(){
    student<int, string> s(175, "Saket");
    cout << "Student Roll: " << s.getroll() << endl;
    cout << "Student Name: " << s.getname() << endl;
    
    return 0;
}