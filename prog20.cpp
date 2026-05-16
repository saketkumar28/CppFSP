#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono; // This makes time units like 'milliseconds' easier to type

// 1. Updated function name to 'task' and added 'delay_ms' parameter
void task(int delay_ms) {
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
        
        // 2. The correct way to pause the thread
        this_thread::sleep_for(milliseconds(delay_ms)); 
    }
    cout << "Thread finished its work!" << endl;
}

int main() {
    cout << "Main thread starting..." << endl;

    // 3. Spawns t1, runs 'task', and passes 200 (which becomes our delay)
    thread t1(task, 200); 
    
    // Main holds its work..until thread t1 finishes.
    t1.detach(); 
    
    cout << "Main thread closing down." << endl;
    return 0;
}