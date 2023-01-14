#include <iostream>
using namespace std;
float calculatcharges(char, char, int);

main()
{
    char service_code, shift;
    int mins;
    cout << "Enter which type customer you are(Residential or premium) select (r/p):";
    cin >> service_code;
    cout << "(press D for th day time or N for night time)for cal:";
    cin >> shift;
    cout << "Enter number of mins u used the service:";
    cin >> mins;
    float result = calculatcharges(service_code, shift, mins);
    cout << result << "$";
}

float calculatcharges(char service_code, char shift, int mins)
{
    float result_charge;
    float charge_r = 10;
    float charge_p = 25;
    if (service_code == 'r' || service_code == 'R')
    {
        if (mins > 50)
        {
            result_charge = charge_r + ((mins - 50) * 0.20);
        }
        else
        {
            result_charge = charge_r;
        }
    }
    if (service_code == 'p' || service_code == 'P')
    {
        if (shift == 'D' || shift == 'd')
        {
            if (mins > 75)
            {
                result_charge = charge_p + ((mins - 75) * 0.10);
            }
            else
            {
                result_charge = charge_p;
            }
        }
        if (shift == 'N' || shift == 'n')
        {
            if (mins > 100)
            {
                result_charge = charge_p + ((mins - 100) * 0.05);
            }
            else
            {
                result_charge = charge_p;
            }
        }
    }
    return result_charge;
}
