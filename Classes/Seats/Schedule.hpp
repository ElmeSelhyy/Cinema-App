#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP
#include <map>
#include <string>

class Schedule
{
private:
    std::map<std::string, bool> _reservations; // Key: "DAY_TIME", Value: reserved or not
public:
    void reserve(const std::string &dayTime);
    bool isReserved(const std::string &dayTime) const;
};

#endif