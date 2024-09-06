#include "Seat.hpp"

Seat::Seat(SeatType *seatType) : _seatType(seatType) {}

void Seat::reserve(const std::string &dayTime)
{
    _schedule.reserve(dayTime);
}

bool Seat::isReserved(const std::string &dayTime) const
{
    return _schedule.isReserved(dayTime);
}

int Seat::getPrice() const { return _seatType->getPrice(); }
std::string Seat::getType() const { return _seatType->getType(); }
Seat::~Seat() { delete _seatType; }