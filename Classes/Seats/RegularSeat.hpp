#ifndef REGULARSEAT_HPP
#define REGULARSEAT_HPP
#include "SeatType.hpp"

class RegularSeat : public SeatType
{
public:
    int getPrice() const override { return 10; }
    std::string getType() const override { return "Regular"; }
};

#endif