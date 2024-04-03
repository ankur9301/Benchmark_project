#include <iostream>
#include <chrono>

int main() {
    int value = 123456;
    int result;
    int array[500];
    // Starting time
    auto startTime = std::chrono::high_resolution_clock::now();
    for (long i = 0; i < 10000000; i++) {
        for (int j = 0; j < 500; j++) {
            array[j] = value;
        }
    }

    // Placeholder for further operations...

    for (long i = 0; i < 10000000; i++) {
        for (int j = 0; j < 500; j++) {
            result = array[j];
        }
    }
    
    


    std::cout << "Memory Benchmark Time = ";
    // Placeholder for duration calculation and printing...
    return 0;
}
