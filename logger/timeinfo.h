#ifndef LOGGER_TIMEINFO_H
#define LOGGER_TIMEINFO_H

#include <atomic>
#include <utility>

struct TimeInfo {
    std::string func_name;
    std::atomic_long time = 0;
    std::atomic_uint count = 0;

    explicit TimeInfo() = default;
    explicit TimeInfo(std::string fn) : func_name(std::move(fn)) {};
//    TimeInfo(const TimeInfo& other) = delete;
//    TimeInfo(TimeInfo&& other) = delete;

    TimeInfo(const TimeInfo& other) : func_name(other.func_name) {
        time.store(other.time.load());
        count.store(other.count.load());
    }
    TimeInfo(TimeInfo&& other)  noexcept : func_name(std::move(other.func_name)) {
        time.store(other.time.load());
        count.store(other.count.load());
    }
};


#endif
