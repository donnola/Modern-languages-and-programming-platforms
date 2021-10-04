#ifndef LOGGER_TIMEINFO_H
#define LOGGER_TIMEINFO_H

struct TimeInfo {
    std::chrono::time_point<std::chrono::steady_clock> time;
    bool start;

    TimeInfo(std::chrono::time_point<std::chrono::steady_clock> t, bool s) : time(t), start(s) {};

};


#endif
