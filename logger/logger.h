#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <string>
#include <chrono>
#include <atomic>
#include <vector>
#include <deque>
#include "timeinfo.h"


class Logger {
    friend class Timer;
public:
    ///
    /// \param fn - имя функции
    /// \return - id функции в логгере
    uint TakeId(const std::string& fn);
    ///
    /// \return - возвращает статический экземпляр логгера
    static Logger* GetInstance();
private:
    Logger() = default;
    /// деструктор
    /// при разрушении в конце программы печатает в файл лог в формате: имя функции, время работы, количество запусков
    ~Logger();
    /// экземпляр логгера
    static Logger* loggerInstance;
    ///
    /// \param id - id функции в логгере
    /// \param time_elapsed - фремя работы функции
    static void AddInfo(uint id, long time_elapsed);
    /// вектор с информацией работы всех функций
    static std::vector<TimeInfo> log_info;
    /// id для новой функции
    std::atomic_uint cur_id;
};


#endif
