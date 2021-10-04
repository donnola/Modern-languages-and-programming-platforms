#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <map>
#include <vector>
#include <atomic>
#include <chrono>
#include "timeinfo.h"


class Logger {
    friend class Timer;

protected:
    Logger() = default;
    ~Logger();
    static Logger *loggerInstance;
    static Logger* GetInstance ();
    void AddInfo(std::string& fn, std::chrono::time_point<std::chrono::steady_clock> begin,
                 std::chrono::time_point<std::chrono::steady_clock> end);
    static size_t FunctionWorkTime(std::vector<TimeInfo>& time_intervals);
    std::map<std::string, std::vector<TimeInfo>> log_info;
};



#endif
