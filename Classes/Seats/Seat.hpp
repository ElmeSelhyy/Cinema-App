#ifndef SEAT_HPP
#define SEAT_HPP
#include <string>
#include "SeatType.hpp"
#include "Schedule.hpp"
class Seat
{
private:
    SeatType *_seatType;
    Schedule _schedule;

public:
    Seat(SeatType *seatType);
    void reserve(const std::string &dayTime);
    bool isReserved(const std::string &dayTime) const;
    int getPrice() const;
    std::string getType() const;
    ~Seat();
};

#endif