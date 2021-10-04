#include "timer.h"


Timer::Timer(std::string fn) {
    begin = std::chrono::steady_clock::now();
    func_name = std::move(fn);
}


Timer::~Timer() {
    end = std::chrono::steady_clock::now();
    Logger* logger = Logger::GetInstance();
    logger->AddInfo(func_name, begin, end);
}
