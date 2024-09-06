#include "Schedule.hpp"

void Schedule::reserve(const std::string &dayTime)
{
    _reservations[dayTime] = true;
}

bool Schedule::isReserved(const std::string &dayTime) const
{
    auto it = _reservations.find(dayTime);
    return it != _reservations.end() && it->second;
}