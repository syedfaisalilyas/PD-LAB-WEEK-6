#include <iostream>
using namespace std;
string ZodicSign(int day, string month);
main()
{
    int day;
    string month;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter month:";
    cin >> month;
    string sign = ZodicSign(day, month);
    cout << sign;
}

string ZodicSign(int day, string month)
{
    string sign;
    if ((month == "march" && (day >= 21 || day <= 31)) || (month == "april" && (day >= 1 || day <= 19)))
    {
        return sign = "Aries";
    }
    if ((month == "april" && (day >= 20 || day <= 31)) || (month == "may" && (day >= 1 || day <= 20)))
    {
        return sign = "Taurus";
    }
    if ((month == "may" && (day >= 21 || day <= 31)) || (month == "june" && (day >= 1 || day <= 20)))
    {
        return sign = "Gemini";
    }
    if ((month == "june" && (day >= 21 || day <= 31)) || (month == "july" && (day >= 1 || day <= 22)))
    {
        return sign = "Cancer";
    }
    if ((month == "july" && (day >= 23 || day <= 31)) || (month == "august" && (day >= 1 || day <= 22)))
    {
        return sign = "Leo";
    }
    if ((month == "august" && (day >= 23 || day <= 31)) || (month == "september" && (day >= 1 || day <= 22)))
    {
        return sign = "Virgo";
    }
    if ((month == "september" && (day >= 23 || day <= 31)) || (month == "october" && (day >= 1 || day <= 22)))
    {
        return sign = " Libra";
    }
    if ((month == "october" && (day >= 23 || day <= 31)) || (month == "november" && (day >= 1 || day <= 21)))
    {
        return sign = "Scorpio";
    }
    if ((month == "november" && (day >= 22 || day <= 31)) || (month == "december" && (day >= 1 || day <= 21)))
    {
        return sign = "Sagittarius";
    }
    if ((month == "december" && (day >= 22 || day <= 31)) || (month == "january" && (day >= 1 || day <= 19)))
    {
        return sign = "Capricorn";
    }
    if ((month == "january" && (day >= 20 || day <= 31)) || (month == "february" && (day >= 1 || day <= 18)))
    {
        return sign = "Aquarius";
    }
    if ((month == "february" && (day >= 19 || day <= 31)) || (month == "march" && (day >= 1 || day <= 20)))
    {
        return sign = "Pisces";
    }

    return sign;
}
