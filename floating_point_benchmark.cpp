#include <iostream>
#include <chrono>

int main() {
    double floatingPointNumber = 3.14159;
    double result;

    // Starting time
    auto startTime = std::chrono::high_resolution_clock::now();
    for (long i = 0; i < 10000000000; i++) {
        result = floatingPointNumber + floatingPointNumber;
    }

    // Placeholder for further operations...

    for (long i = 0; i < 5000000000; i++) {
    result = floatingPointNumber * floatingPointNumber;
    }
    
    for (long i = 0; i < 2000000000; i++) {
    result = floatingPointNumber / floatingPointNumber;
    }

    
    // Placeholder for duration calculation and printing...

    // Ending time
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = endTime - startTime;
    std::cout << "64_bit Floating Point Operations Time = " << duration.count() << "seconds" << std::endl;

    return 0;
}
