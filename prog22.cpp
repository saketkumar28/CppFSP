#include <iostream>
#include <thread>
#include <functional> 

using namespace std;

void modifyNumber(int& sharedNumber) {
    sharedNumber = 99;
    cout << "Worker thread: I changed the original to " << sharedNumber << endl;
}

int main() {
    int myNumber = 10;
    
    cout << "Main thread: Before thread starts, myNumber is " << myNumber << endl;
    thread t1(modifyNumber, std::ref(myNumber));
    t1.join();
    cout << "Main thread: After thread finishes, myNumber is NOW " << myNumber << endl;

    return 0;
}