#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;
using namespace std::chrono; // This makes time units like 'milliseconds' easier to type

// 1. Updated function name to 'task' and added 'delay_ms' parameter
mutex mtx;
void task(int delay_ms) {
    for (int i = 1; i <= 5; i++) {
       mtx.lock();
       cout<<i<<endl;
       mtx.unlock();
    }
    cout << "Thread finished its work!" << endl;
}

int main() {
    cout << "Main thread starting..." << endl;
    thread t1(pn,"t1");
    thread t2(pn,"t2");
    cout << "Main thread closing down." << endl;
    return 0;
}