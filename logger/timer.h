#ifndef LOGGER_TIMER_H
#define LOGGER_TIMER_H

#include "logger.h"
#include <chrono>
#include <string>
#include <utility>


class Timer{
public:
    /// конструктор
    /// \param i - id функции
    explicit Timer(uint i) : begin(std::chrono::high_resolution_clock::now()), id(i) {};
    /// деструктор
    /// в деструкторе вызывается функция добавления информации о работе функции в логгер
    ~Timer();

private:
    /// время начала работы функции
    std::chrono::time_point<std::chrono::high_resolution_clock> begin;
    /// время окончания работы функции
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    /// id функции
    size_t id;
};


#endif
