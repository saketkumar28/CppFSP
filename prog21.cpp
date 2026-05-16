#include <iostream>
#include <thread>
#include <chrono>
//passing by value...
using namespace std;

void modifyNumber(int workerCopy) {
    workerCopy = 99;
    cout << "Worker thread: I changed my copy to " << workerCopy << endl;
}

int main() {
    int myNumber = 10;
    
    cout << "Main thread: Before thread starts, myNumber is " << myNumber << endl;
    thread t1(modifyNumber, myNumber);
    t1.join();
    cout << "Main thread: After thread finishes, myNumber is STILL " << myNumber << endl;

    return 0;
}