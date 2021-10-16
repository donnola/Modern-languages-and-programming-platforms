#include <iostream>
#include <functional>
#include <chrono>
#include <thread>
#include "timer.h"

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void a() {
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);


    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(2));
}

void b() {
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(3));
}


int main() {
    Logger* logger = Logger::GetInstance();
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(5));
    std::thread t1(a);
    std::thread t2(b);
    std::thread t3(a);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
