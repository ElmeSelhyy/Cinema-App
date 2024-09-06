#ifndef VIPSEAT_HPP
#define VIPSEAT_HPP
#include "SeatType.hpp"

class VipSeat : public SeatType
{
public:
    int getPrice() const override { return 30; }
    std::string getType() const override { return "VIP"; }
};

#endif