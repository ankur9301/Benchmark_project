#include <iostream>
#include <chrono>

int main() {
    int32_t integerConstant = 2147483647;
    double result;

    // Starting time
    auto startTime = std::chrono::high_resolution_clock::now();
   

    // Placeholder for further operations...
    for (long i = 0; i < 10000000000; i++) {
        result = integerConstant + integerConstant;
    }

    for (long i = 0; i < 5000000000; i++) {
    result = integerConstant * integerConstant;
}

    for (long i = 0; i < 2000000000; i++) {
    result = integerConstant / integerConstant;
}



    std::cout << "32_bit Integer Operation Time = ";
    // Placeholder for duration calculation and printing...
    return 0;
}
