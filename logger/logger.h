#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <map>
#include <vector>
#include <atomic>
#include <chrono>
#include <mutex>
#include "timeinfo.h"


class Logger {
    friend class Timer;

private:
    Logger() = default;
    ~Logger();
    static Logger *loggerInstance;
    static std::mutex map_mutex;
    static Logger* GetInstance ();
    void AddInfo(std::string& fn, std::chrono::time_point<std::chrono::steady_clock> begin,
                 std::chrono::time_point<std::chrono::steady_clock> end);
    static size_t FunctionWorkTime(std::vector<TimeInfo>& time_intervals);
    std::map<std::string, std::pair<std::mutex, std::vector<TimeInfo>>> log_info;
};



#endif
