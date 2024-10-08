// COMMON.cpp
#include "Common.hpp"

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

string dayToStr(DayE day)
{
    switch (day)
    {
    case DayE::SATURDAY:
        return "SATURDAY";
    case DayE::SUNDAY:
        return "SUNDAY";
    case DayE::MONDAY:
        return "MONDAY";
    case DayE::TUESDAY:
        return "TUESDAY";
    case DayE::WEDNESDAY:
        return "WEDNESDAY";
    case DayE::THURSDAY:
        return "THURSDAY";
    case DayE::FRIDAY:
        return "FRIDAY";
    default:
        throw invalid_argument("Invalid day enum");
    }
}

string timeToStr(TimeE time)
{
    switch (time)
    {
    case TimeE::NINE_AM:
        return "NINE_AM";
    case TimeE::TWELVE_PM:
        return "TWELVE_PM";
    case TimeE::THREE_PM:
        return "THREE_PM";
    case TimeE::SIX_PM:
        return "SIX_PM";
    case TimeE::NINE_PM:
        return "NINE_PM";
    case TimeE::TWELEVE_AM:
        return "TWELEVE_AM";
    default:
        throw invalid_argument("Invalid time enum");
    }
}

string hallToStr(HallE hall)
{
    switch (hall)
    {
    case HallE::HALL_1:
        return "HALL_1";
    case HallE::HALL_2:
        return "HALL_2";
    case HallE::HALL_3:
        return "HALL_3";
    default:
        throw invalid_argument("Invalid hall enum");
    }
}
