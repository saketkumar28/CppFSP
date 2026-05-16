#include <iostream>
#include <thread>
using namespace std;

//wont work as we need posix thread.

// 1. Update the function to accept an integer parameter
void task(int number) {
    cout << "Thread running with number: " << number << endl;
}

int main() {
    // 2. Now passing 200 works perfectly
    thread t1(task, 200); 
    t1.join(); //main holds its work..until thread t1 finishes.
    
    return 0;
}