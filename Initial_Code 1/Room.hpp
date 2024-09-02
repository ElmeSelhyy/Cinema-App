#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <vector>

class Room
{
protected:
    static int nextId; // Static member to keep track of the next available ID
    int id;
    int capacity;
    std::vector<bool> seats;

    // Protected constructor to prevent direct instantiation
    Room(int cap);

public:
    virtual ~Room() = default;

    virtual double getTicketPrice() const = 0;
    virtual std::string getRoomType() const = 0;

    int getId() const;
    int getCapacity() const;

    bool bookSeat(int seatNumber);
    int getAvailableSeats() const;

private:
    static int generateUniqueId();
};

// Example derived class
class StandardRoom : public Room
{
public:
    StandardRoom(int cap);
    double getTicketPrice() const override;
    std::string getRoomType() const override;
};

class GoldRoom : public Room
{
public:
    GoldRoom(int cap);
    double getTicketPrice() const override;
    std::string getRoomType() const override;
};

class VIPRoom : public Room
{
public:
    VIPRoom(int cap);
    double getTicketPrice() const override;
    std::string getRoomType() const override;
};

#endif // ROOM_HPP