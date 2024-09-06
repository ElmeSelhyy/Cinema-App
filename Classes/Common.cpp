// COMMON.cpp
#include "COMMON.hpp"

DayE stringToDayE(const string &day)
{
    const map<string, DayE> dayMap = {
        {"SATURDAY", DayE::SATURDAY},
        {"SUNDAY", DayE::SUNDAY},
        {"MONDAY", DayE::MONDAY},
        {"TUESDAY", DayE::TUESDAY},
        {"WEDNESDAY", DayE::WEDNESDAY},
        {"THURSDAY", DayE::THURSDAY},
        {"FRIDAY", DayE::FRIDAY}};
    auto it = dayMap.find(day);
    if (it != dayMap.end())
    {
        return it->second;
    }
    throw invalid_argument("Invalid day string");
}

TimeE stringToTimeE(const string &time)
{
    const map<string, TimeE> timeMap = {
        {"NINE_AM", TimeE::NINE_AM},
        {"TWELVE_PM", TimeE::TWELVE_PM},
        {"THREE_PM", TimeE::THREE_PM},
        {"SIX_PM", TimeE::SIX_PM},
        {"NINE_PM", TimeE::NINE_PM},
        {"TWELEVE_AM", TimeE::TWELEVE_AM}};
    auto it = timeMap.find(time);
    if (it != timeMap.end())
    {
        return it->second;
    }
    throw invalid_argument("Invalid time string");
}

HallE stringToHallE(const string &hall)
{
    const map<string, HallE> hallMap = {
        {"HALL_1", HallE::HALL_1},
        {"HALL_2", HallE::HALL_2},
        {"HALL_3", HallE::HALL_3}};
    auto it = hallMap.find(hall);
    if (it != hallMap.end())
    {
        return it->second;
    }
    throw invalid_argument("Invalid hall string");
}
