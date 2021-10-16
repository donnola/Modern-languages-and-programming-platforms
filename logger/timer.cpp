#include "timer.h"

Timer::~Timer() {
    end = std::chrono::steady_clock::now();
    Logger* log = Logger::GetInstance();
    log->AddInfo(id, std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count());
}

