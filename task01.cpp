#include <iostream>
using namespace std;
void activity(string temp, string humidity);

main()
{
    string temp, humidity;
    cout << "Enter the temperature:";
    cin >> temp;
    cout << "Enter the humidity:";
    cin >> humidity;
    activity(temp, humidity);
}

void activity(string temp, string humidity)
{
    if (temp == "warm" && humidity == "dry")
    {
        cout << "Play tennis";
    }
    if (temp == "warm" && humidity == "humid")
    {
        cout << "swim";
    }
    if (temp == "cold" && humidity == "dry")
    {
        cout << "Play basketball";
    }
    if (temp == "cold" && humidity == "humid")
    {
        cout << "watch tv";
    }
}