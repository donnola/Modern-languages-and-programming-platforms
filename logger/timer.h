#ifndef LOGGER_TIMER_H
#define LOGGER_TIMER_H

#include "logger.h"
#include <chrono>
#include <string>
#include <utility>


class Timer{
public:
    explicit Timer(uint i) : begin(std::chrono::steady_clock::now()), id(i) {};
    ~Timer();

private:
    std::chrono::time_point<std::chrono::steady_clock> begin;
    std::chrono::time_point<std::chrono::steady_clock> end;
    size_t id;
};


#endif
