#include "logger.h"
#include <fstream>
#include <algorithm>
#include <iostream>


Logger* Logger::loggerInstance = nullptr;
std::vector<TimeInfo> Logger::log_info(100000);

Logger::~Logger() {
    auto cur = std::chrono::high_resolution_clock::now();
    auto cur_time = std::chrono::high_resolution_clock::to_time_t(cur);
    std::string file_name = "log_"+ std::to_string(cur_time) + ".txt";
    std::ofstream log_file(file_name);

    for (uint i = 0; i < cur_id; ++i) {
        std::string name = log_info[i].func_name;
        size_t function_call_num = log_info[i].count;
        size_t work_time = log_info[i].time;
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
    uint id = cur_id++;
    log_info[id].func_name = fn;
    return id;
}



