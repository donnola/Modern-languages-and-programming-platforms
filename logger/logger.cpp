#include "logger.h"
#include <fstream>
#include <algorithm>
#include <iostream>


Logger* Logger::loggerInstance = nullptr;
std::mutex Logger::log_mutex;


Logger::~Logger() {
    auto cur = std::chrono::high_resolution_clock::now();
    auto cur_time = std::chrono::high_resolution_clock::to_time_t(cur);
    std::string file_name = "log_"+ std::to_string(cur_time) + ".txt";
    std::ofstream log_file(file_name);

    for (auto& f : log_info) {
        std::string name = f.func_name;
        size_t function_call_num = f.count;
        size_t work_time = f.time;
        std::string log_string = "function " + name + " worked " + std::to_string(work_time) + " milliseconds " +
                                 std::to_string(function_call_num) + " times\n";
        log_file << log_string;
        std::cout << log_string;
    }
    std::cout << "log writen into " + file_name;
    log_file.close();
}

void Logger::AddInfo(uint id, long time_elapsed) {
    log_info[id].time += time_elapsed;
    ++log_info[id].count;
}

Logger* Logger::GetInstance() {
    if (!loggerInstance) {
        static Logger log;
        loggerInstance = &log;
    }
    return loggerInstance;
}

uint Logger::TakeId(const std::string& fn) {
    std::lock_guard<std::mutex> lock(log_mutex);
    Logger* log = GetInstance();
    uint id = log->log_info.size();
    log->log_info.emplace_back(fn);
    return id;
}



