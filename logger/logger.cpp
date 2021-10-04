#include "logger.h"
#include <fstream>
#include <algorithm>


Logger* Logger::loggerInstance = nullptr;

bool comp (TimeInfo& first, TimeInfo& second) {
    if (first.time < second.time) {
        return true;
    }
    if (first.time == second.time && first.start) {
        return true;
    }
    return false;
}

Logger::~Logger() {
    auto cur = std::chrono::system_clock::now();
    auto cur_time = std::chrono::system_clock::to_time_t(cur);
    std::string file_name = "log_"+ std::to_string(cur_time);
    std::ofstream log_file(file_name);

    for (auto f : log_info) {
        std::string name = f.first;
        size_t function_call_num = f.second.size();
        size_t work_time = FunctionWorkTime(f.second);
        log_file << "function" + name + "worked" + std::to_string(work_time) + "milliseconds" +
        std::to_string(function_call_num) + "times\n";
    }

    log_file.close();
}

void Logger::AddInfo(std::string &fn, std::chrono::time_point<std::chrono::steady_clock> begin,
                     std::chrono::time_point<std::chrono::steady_clock> end) {
    log_info[fn].emplace_back(TimeInfo(begin, true));
    log_info[fn].emplace_back(TimeInfo(end, false));
}

Logger *Logger::GetInstance() {
    if (!loggerInstance) {
        loggerInstance = new Logger();
    }
    return loggerInstance;
}


size_t Logger::FunctionWorkTime(std::vector<TimeInfo> &times) {
    std::sort(times.begin(), times.end(), comp);
    size_t elapsed_ms = 0;
    size_t c = 0;
    for (size_t i = 0; i < times.size(); ++i) {
        if (c > 0 && i > 0) {
            elapsed_ms += std::chrono::duration_cast<std::chrono::milliseconds>(
                    times[i].time - times[i - 1].time).count();
        }
        if (times[i].start) {
            ++c;
        }
        else {
            --c;
        }
    }
    return elapsed_ms;
}


