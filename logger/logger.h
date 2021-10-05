#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <chrono>
#include <mutex>
#include <vector>
#include <deque>
#include "timeinfo.h"


class Logger {
public:
    static uint TakeId(const std::string& fn);
    static Logger* GetInstance();
    void AddInfo(uint id, long time_elapsed);

private:
    Logger() = default;
    ~Logger();
    static Logger* loggerInstance;
    static std::mutex log_mutex;
    std::deque<TimeInfo> log_info;
};


#endif
