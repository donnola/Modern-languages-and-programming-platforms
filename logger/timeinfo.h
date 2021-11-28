#ifndef LOGGER_TIMEINFO_H
#define LOGGER_TIMEINFO_H

#include <atomic>
#include <utility>

/// структура, описывающая функцию
/// содержит имя функции, общее время работы, количество вызовов
struct TimeInfo {
    /// имя функции
    std::string func_name;
    /// время работы функции
    std::atomic_long time = 0;
    /// количество запусков функции
    std::atomic_uint count = 0;

    explicit TimeInfo() = default;
    /// конструктор копированием
    /// \param other - экземпляр копирования
    TimeInfo(const TimeInfo& other) : func_name(other.func_name) {
        time.store(other.time.load());
        count.store(other.count.load());
    }
    /// коснтруктор перемещением
    /// \param other - экземпляр перемещения
    TimeInfo(TimeInfo&& other)  noexcept : func_name(std::move(other.func_name)) {
        time.store(other.time.load());
        count.store(other.count.load());
    }
};


#endif
