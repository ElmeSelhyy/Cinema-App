#include "Hall.hpp"

Hall::Hall(const std::vector<std::vector<SeatType *>> &seatTypes)
{
    if (seatTypes.size() != c_NumRows || (c_NumRows > 0 && seatTypes[0].size() != c_NumCols))
    {
        throw std::invalid_argument("Seat types dimensions do not match the specified rows and columns");
    }

    _seats.resize(c_NumRows);
    for (int i = 0; i < c_NumRows; ++i)
    {
        for (int j = 0; j < c_NumCols; ++j)
        {
            _seats[i].emplace_back(seatTypes[i][j]);
        }
    }
};

void Hall::reserveSeat(int row, int col, const std::string &dayTime)
{
    if (row >= 0 && row < _seats.size() && col >= 0 && col < _seats[row].size())
    {
        _seats[row][col].reserve(dayTime);
    }
    else
    {
        throw std::out_of_range("Invalid seat position");
    }
}

bool Hall::isSeatReserved(int row, int col, const std::string &dayTime) const
{
    if (row >= 0 && row < _seats.size() && col >= 0 && col < _seats[row].size())
    {
        return _seats[row][col].isReserved(dayTime);
    }
    throw std::out_of_range("Invalid seat position");
}

Seat Hall::getSeatInfo(int row, int col) const
{
    if (row >= 0 && row < _seats.size() && col >= 0 && col < _seats[row].size())
    {
        return _seats[row][col];
    }
    throw std::out_of_range("Invalid seat position");
}