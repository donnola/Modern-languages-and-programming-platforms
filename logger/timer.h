#ifndef LOGGER_TIMER_H
#define LOGGER_TIMER_H

#include "logger.h"
#include <chrono>
#include <string>
#include <utility>


class Timer{
public:
    explicit Timer(std::string fn);
    ~Timer();

private:
    std::chrono::time_point<std::chrono::steady_clock> begin;
    std::chrono::time_point<std::chrono::steady_clock> end;
    std::string func_name;

};


#endif
