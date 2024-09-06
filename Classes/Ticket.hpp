#ifndef TICKET_HPP
#define TICKET_HPP

#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "Customer.hpp"
#include "Common.hpp"
#include "Cinema.hpp"
class TicketC
{
public:
    TicketC(CustomerC *customer, MovieC *movie, const string &hall, const string &day, const string &time)
        : m_customer(customer), m_movie(movie), m_hall(hall), m_day(day), m_time(time)
    {
        m_id = generateUniqueId();
    }
    const string &GetMovieTitle() const { return m_movie->GetTitle(); }
    void SetHall(const string &hall) { m_hall = hall; }
    const string &GetHall() const { return m_hall; }
    void SetDay(const string &day) { m_day = day; }
    const string &GetDay() const { return m_day; }
    void SetTime(const string &time) { m_time = time; }
    const string &GetTime() const { return m_time; }
    // void SetSeat(const string &seat) { m_seat = seat; }
    // const string &GetSeat() const { return m_seat; }
    int generateUniqueId() { return m_id++; }
    float getTicketPrice() const;
    void printTicket() const;

private:
    CustomerC *m_customer;
    MovieC *m_movie;
    static int m_id;
    string m_hall;
    string m_day;
    string m_time;
    string m_seat;
};

#endif