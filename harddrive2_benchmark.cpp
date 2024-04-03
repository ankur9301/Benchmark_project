#include <iostream>
#include <fstream>
#include <chrono>

int main() {
    std::fstream file("driveBenchmark2.txt", std::ios::out);
    int bufferSize = 10000;
    char buffer[bufferSize];
    char inputChar = 'A';

    for (int i = 0; i < 10000; i++) {
        buffer[i] = inputChar;
    }

    // Placeholder for writing operation...

    std::cout << "Hard drive Benchmark 2 Time = ";
    // Placeholder for duration calculation and printing...
    return 0;
}
