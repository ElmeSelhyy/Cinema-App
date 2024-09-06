#include "Movie.hpp"

string MovieC::GetGenreStr()
{
    string genreStr = "";
    for (const auto &genre : m_genre)
    {
        genreStr += (m_genreStr.at(genre) + ", ");
    }
    if (!(genreStr.empty()))
    {
        genreStr.pop_back();
        genreStr.pop_back();
    }
    return genreStr;
}

void MovieC::printShowTimes() const
{
    for (const auto &showTime : m_showTimes)
    {
        cout << "Day: " << dayToStr(showTime.m_movieDay) << " Time: " << timeToStr(showTime.m_time) << endl;
    }
}