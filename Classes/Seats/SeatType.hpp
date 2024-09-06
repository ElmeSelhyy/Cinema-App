#ifndef SEATTYPE_HPP
#define SEATTYPE_HPP
#include <string>

class SeatType
{
public:
    virtual int getPrice() const = 0;
    virtual std::string getType() const = 0;
    virtual ~SeatType() {}
};

#endif