#include "Room.hpp"
#include <algorithm>

int Room::nextId = 1;

Room::Room(int cap) : capacity(cap), seats(cap, false)
{
    id = generateUniqueId();
}

int Room::getId() const
{
    return id;
}

int Room::getCapacity() const
{
    return capacity;
}

bool Room::bookSeat(int seatNumber)
{
    if (seatNumber < 1 || seatNumber > capacity || seats[seatNumber - 1])
    {
        return false;
    }
    seats[seatNumber - 1] = true;
    return true;
}

int Room::getAvailableSeats() const
{
    return std::count(seats.begin(), seats.end(), false);
}

int Room::generateUniqueId()
{
    return nextId++;
}

// Definitions for StandardRoom
StandardRoom::StandardRoom(int cap) : Room(cap) {}

double StandardRoom::getTicketPrice() const
{
    return 10.0;
}

std::string StandardRoom::getRoomType() const
{
    return "Standard";
}

// Definitions for GoldRoom
GoldRoom::GoldRoom(int cap) : Room(cap) {}

double GoldRoom::getTicketPrice() const
{
    return 15.0;
}

std::string GoldRoom::getRoomType() const
{
    return "Gold";
}

// Definitions for VIPRoom

VIPRoom::VIPRoom(int cap) : Room(cap) {}

double VIPRoom::getTicketPrice() const
{
    return 20.0;
}

std::string VIPRoom::getRoomType() const
{
    return "VIP";
}
