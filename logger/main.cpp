#include <iostream>
#include <functional>
#include <thread>
#include "timer.h"
#include "logger.h"
#include "test.cpp"
#include "testlog.cpp"

using namespace std::this_thread;
using namespace std::chrono;

int main() {
    Logger* logger = Logger::GetInstance();
    std::cout << "колчичество возможных потоков: " << std::thread::hardware_concurrency() << "\n";
    // tests
    {
        auto start = std::chrono::high_resolution_clock::now();
        test_with_log();
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test with log: " << std::chrono::duration<double, std::milli>(end - start).count()
                  << " milliseconds\n";
    }
    {
        auto start = std::chrono::high_resolution_clock::now();
        test_without_log();
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test without log: " << std::chrono::duration<double, std::milli>(end - start).count()
                  << " milliseconds\n";
    }
    return 0;
}
