#ifndef LOGGER_TIMEINFO_H
#define LOGGER_TIMEINFO_H

#include <atomic>
#include <utility>

struct TimeInfo {
    std::string func_name;
    std::atomic_long time{0};
    std::atomic_uint count{0};

    explicit TimeInfo(std::string fn) : func_name(std::move(fn)){};

};


#endif
