#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Classes/Movie.hpp"
#include "Classes/Cinema.hpp"
#include "Classes/Ticket.hpp"
#include "Classes/Customer.hpp"

int main()
{
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

    // Add movies to customer history
    customer1.AddMovie(movie1);

    // Create ticket instances
    TicketC ticket1(&customer1, &movie1, "HALL_1", "FRIDAY", "SIX_PM");

    ticket1.printTicket();
}