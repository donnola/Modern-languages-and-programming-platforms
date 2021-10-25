#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <chrono>
#include <atomic>
#include <vector>
#include <deque>
#include "timeinfo.h"


class Logger {
    friend class Timer;
public:
    uint TakeId(const std::string& fn);
    static Logger* GetInstance();
private:
    Logger() = default;
    ~Logger();
    static Logger* loggerInstance;
    static void AddInfo(uint id, long time_elapsed);
    static std::vector<TimeInfo> log_info;
    std::atomic_uint cur_id = 0;
};


#endif
