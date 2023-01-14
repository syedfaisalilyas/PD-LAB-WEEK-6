#include <iostream>
using namespace std;
float calculateprice(string fruit, string day, float quantity);

main()
{
    string fruit, day;
    float quantity;
    cout << "Enter fruit:";
    cin >> fruit;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter quantity:";
    cin >> quantity;
    float price = calculateprice(fruit, day, quantity);
    cout << price;
}

float calculateprice(string fruit, string day, float quantity)
{
    float price = 0;
    if (day == "sunday" || day == "saturday")
    {
        if (fruit == "banana")
            price = 2.70;
        if (fruit == "apple")
            price = 1.25;
        if (fruit == "orange")
            price = 0.90;
        if (fruit == "grapefruit")
            price = 1.60;
        if (fruit == "kiwi")
            price = 3.00;
        if (fruit == "pineapple")
            price = 5.60;
        if (fruit == "grapes")
            price = 4.20;
    }
    else if (day == "monday" || day == "tuesday" || day == "thursday" || day == "wednesday" || day == "friday")
    {
        if (fruit == "banana")
            price = 2.50;
        if (fruit == "apple")
            price = 1.20;
        if (fruit == "orange")
            price = 0.85;
        if (fruit == "grapefruit")
            price = 1.45;
        if (fruit == "kiwi")
            price = 2.70;
        if (fruit == "pineapple")
            price = 5.50;
        if (fruit == "grapes")
            price = 3.85;
    }
    else
    {
        cout << "error!";
    }

    return price * quantity;
}
