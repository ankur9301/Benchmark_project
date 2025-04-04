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

    // Starting time
    auto startTime = std::chrono::high_resolution_clock::now();
    for (long i = 0; i < 10000000; i++) {
        file << buffer;
    }
    // Close the file
    file.close();

    // Opening the file for reading
    file.open("driveBenchmark.txt", std::ios::in | std::ios::binary);

    while(file.read(buffer, bufferSize)) {}

    file.close();


    
    // Placeholder for duration calculation and printing...

    // Ending time
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = endTime - startTime;
    std::cout << "Hard drive Benchmark Time = " << duration.count() << "seconds" << std::endl;

    return 0;
}
