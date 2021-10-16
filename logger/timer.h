#ifndef LOGGER_TIMER_H
#define LOGGER_TIMER_H

#include "logger.h"
#include <chrono>
#include <string>
#include <utility>


class Timer{
public:
    explicit Timer(uint i) : begin(std::chrono::high_resolution_clock::now()), id(i) {};
    ~Timer();

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> begin;
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    size_t id;
};


#endif
