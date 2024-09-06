#ifndef PREMIUMSEAT_HPP
#define PREMIUMSEAT_HPP
#include "SeatType.hpp"

class PremiumSeat : public SeatType
{
public:
    int getPrice() const override { return 20; }
    std::string getType() const override { return "Premium"; }
};

#endif