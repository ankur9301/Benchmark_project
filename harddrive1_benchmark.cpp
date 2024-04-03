#include <iostream>
#include <fstream>
#include <chrono>

int main() {
    std::fstream file("driveBenchmark.txt", std::ios::out);
    int bufferSize = 100;
    char buffer[bufferSize];
    char inputChar = 'A';

    for (int i = 0; i < 100; i++) {
        buffer[i] = inputChar;
    }

    // Placeholder for writing operation...

    std::cout << "Hard drive Benchmark Time = ";
    // Placeholder for duration calculation and printing...
    return 0;
}
