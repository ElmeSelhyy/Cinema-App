#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Classes/Movie.hpp"
#include "Classes/Cinema.hpp"
#include "Classes/Ticket.hpp"
#include "Classes/Customer.hpp"
#include "RegularSeat.hpp"
#include "PremiumSeat.hpp"
#include "VipSeat.hpp"
int main()
{
    // Create SeatType instances
    std::vector<std::vector<SeatType *>> seatTypes = {
        {new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new VipSeat()},
        {new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new VipSeat()},
        {new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new VipSeat()},
        {new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new PremiumSeat(), new RegularSeat(), new RegularSeat(), new VipSeat()},
    };
    // Create movie instances
    MovieC movie1("The Shawshank Redemption", {MovieGenreE::DRAMA}, 9.3, {{DayE::FRIDAY, TimeE::SIX_PM}});
    MovieC movie2("The Godfather", {MovieGenreE::DRAMA}, 9.2, {{DayE::SATURDAY, TimeE::NINE_PM}});
    MovieC movie3("The Dark Knight", {MovieGenreE::ACTION, MovieGenreE::DRAMA}, 9.0, {{DayE::SUNDAY, TimeE::THREE_PM}});

    // Create cinema instance
    CinemaC::GetCinemaInst()->AddMovie(movie1);
    CinemaC::GetCinemaInst()->AddMovie(movie2);
    CinemaC::GetCinemaInst()->AddMovie(movie3);

    // Create customer instances
    CustomerC customer1("Ahmed Waleed", "AhmedWaleed_@gmail.com", "01021613881");
    CustomerC customer2("Ahmed Yasser", "AhmedYasser@gmail.com,", "01021613881");
    CustomerC customer3("Ibrahim Nashaat", "IbrahimNashaat@gmail.com", "01021613881");

    // Create ticket instances
    TicketC ticket2(&customer2, &movie2, "HALL_2", "SATURDAY", "NINE_PM");
    TicketC ticket3(&customer2, &movie3, "HALL_3", "SUNDAY", "THREE_PM");

    /* ticket1.printTicket();
     cout << "----------------------" << endl;
     ticket2.printTicket();
     cout << "----------------------" << endl;
     ticket3.printTicket();
     */
    customer2.printHistory();
    return 0;
}