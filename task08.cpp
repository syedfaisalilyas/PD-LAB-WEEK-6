#include <iostream>
using namespace std;
string shape(int h, int x, int y);

main()
{
    int h, x, y;
    cout << "Enter h:";
    cin >> h;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    string result = shape(h, x, y);
    cout << result;
}

string shape(int h, int x, int y)
{
    string result;
    if (((x > 0 && x < 3 * h) && (y > 0 && y < h)) || ((x > h && x < 2 * h) && (y > h && y < 4 * h)))
    {
        result = "Inside";
    }
    else if (((x == 0 || x == 3 * h) && (y == 0 || y == h)) || ((x == h || x == 2 * h) && (y == h || y == 4 * h)))
    {
        result = "On border";
    }
    else
    {
        result = "Outside";
    }
    return result;
}