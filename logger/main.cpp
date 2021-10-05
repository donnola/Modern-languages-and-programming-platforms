#include <iostream>
#include <chrono>
#include <thread>
#include "timer.h"

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void awqertr() {
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);


    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(2));
}

void awtrdu() {
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(3));
}


int main() {
    std::string fn = __FUNCTION__;
    static uint id = Logger::TakeId(fn);
    Timer t(id);

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(5));
    awqertr();
    awtrdu();
    awqertr();
    return 0;
}
