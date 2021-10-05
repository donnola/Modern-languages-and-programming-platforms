#include "timer.h"

Timer::~Timer() {
    end = std::chrono::steady_clock::now();
    Logger::log_mutex.lock();
    Logger* log = Logger::GetInstance();
    Logger::log_mutex.unlock();
    log->AddInfo(id, std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
}

