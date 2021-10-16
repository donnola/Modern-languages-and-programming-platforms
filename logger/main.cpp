#include <iostream>
#include <functional>
#include <chrono>
#include <thread>
#include "timer.h"
#include "test.cpp"

using namespace std::this_thread;
using namespace std::chrono;

int main() {
    Logger* logger = Logger::GetInstance();

    std::cout << "колчичество возможных потоков: " << std::thread::hardware_concurrency() << "\n";
    // tests
    test1();
    test2();
    test3();
    return 0;
}
