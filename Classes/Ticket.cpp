#include "Ticket.hpp"
int TicketC::m_nextId = 1;

float TicketC::getTicketPrice() const
{
    TimeE time = stringToTimeE(m_time);
    DayE day = stringToDayE(m_day);
    HallE hall = stringToHallE(m_hall);

    // Access the price maps through the CinemaC instance
    const auto &cinema = CinemaC::GetCinemaInst();
    float price = cinema->GetHallPrice().at(hall) + cinema->GetDayPrice().at(day) + cinema->GetTimePrice().at(time);
    return price;
}

void TicketC::printTicket() const
{
    cout << "Ticket ID: " << m_id << endl;
    cout << "Customer Name: " << m_customer->GetName() << endl;
    cout << "Movie Title: " << m_movie->GetTitle() << endl;
    cout << "Hall: " << m_hall << endl;
    cout << "Day: " << m_day << endl;
    cout << "Time: " << m_time << endl;
    cout << "Price: " << getTicketPrice() << endl;
}

int TicketC::generateUniqueId()
{
    return m_nextId++;
}