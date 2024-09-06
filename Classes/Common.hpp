// COMMON_HPP (header file)
#ifndef COMMON_HPP
#define COMMON_HPP

#include <array>
#include <map>
#include <string>
#include <stdexcept>

using namespace std;

const unsigned int c_NumRows = 4;
const unsigned int c_NumCols = 8;

// Aliases
using seatsArr = array<array<bool, c_NumCols>, c_NumRows>;

enum class DayE
{
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

enum class TimeE
{
    NINE_AM,
    TWELVE_PM,
    THREE_PM,
    SIX_PM,
    NINE_PM,
    TWELEVE_AM
};

enum class HallE
{
    HALL_1,
    HALL_2,
    HALL_3
};

// Function declarations
DayE stringToDayE(const string &day);
TimeE stringToTimeE(const string &time);
HallE stringToHallE(const string &hall);

#endif
