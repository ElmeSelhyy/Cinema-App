#include "Ticket.hpp"
int TicketC::m_id = 1;
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