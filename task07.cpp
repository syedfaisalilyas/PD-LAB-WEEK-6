#include <iostream>
using namespace std;

main()
{
    int hour1, hour2, min1, min2;
    cout << "Exam starting time:(hour)";
    cin >> hour1;
    cout << "Exam starting time:(min)";
    cin >> min1;
    cout << "Student hour of arrival:";
    cin >> hour2;
    cout << "Student minute of arrival:";
    cin >> min2;
    int time1 = (hour1 * 60) + min1;
    int time2 = (hour2 * 60) + min2;

    if (time2 > time1)
    {
        int min = time2 - time1;
        int hour = min / 60;

        if (hour >= 1)
        {
            min = min - (hour * 60);
            cout << "Late" << endl;
            cout << hour << ":" << min << "after the start";
        }
        else
        {
            cout << "Late" << endl;
            cout << min << " minutes after the start";
        }
    }
    else if (time2 < time1)
    {
        int min = time1 - time2;
        int hour = min / 60;
        if (hour < 1)
        {
            if (min <= 30)
            {
                cout << "On time" << endl;
                cout << min << "minutes before the start";
            }
            else
            {
                cout << "Early" << endl;
                cout << min << "minutes before the start";
            }
        }
        if (hour >= 1)
        {
            min = min - (hour * 60);
            cout << "Early" << endl;
            cout << hour << ":" << min << "hours before the start";
        }
    }
    else
    {
        cout << "Onn time";
    }
}
