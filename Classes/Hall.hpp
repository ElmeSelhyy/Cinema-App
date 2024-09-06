#ifndef HALL_HPP
#define HALL_HPP

#include "Seat.hpp"
#include <vector>
#include "Common.hpp"

class Hall
{
private:
    std::vector<std::vector<Seat>> _seats;

public:
    Hall(const std::vector<std::vector<SeatType *>> &seatTypes);
    void reserveSeat(int row, int col, const std::string &dayTime);
    bool isSeatReserved(int row, int col, const std::string &dayTime) const;
    Seat getSeatInfo(int row, int col) const;
};

#endif