#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <chrono>
#include <mutex>
#include <vector>
#include "timeinfo.h"


class Logger {
    friend class Timer;

public:
    static uint TakeId(const std::string& fn);

protected:
    ~Logger();
    static Logger* loggerInstance;
    static Logger* GetInstance();
    static std::mutex log_mutex;
    void AddInfo(uint id, long time_elapsed);
    std::vector<TimeInfo> log_info;
};


#endif
