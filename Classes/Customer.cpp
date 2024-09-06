#include "Customer.hpp"
void CustomerC::printHistory() const
{
    cout << "Customer Name: " << m_name << endl;
    cout << "Customer Mail: " << m_mail << endl;
    cout << "Customer Phone Number: " << m_phoneNum << endl;
    cout << "Customer History: " << endl;
    for (const auto &movie : m_history)
    {
        cout << "Movie Title: " << movie.GetTitle() << endl;
        cout << "Movie Rating: " << movie.GetRating() << endl;
        cout << "Movie Showtimes: " << endl;
    }
}