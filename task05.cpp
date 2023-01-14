#include <iostream>
using namespace std;
float Studio(string month, int n_stays);
float Appartment(string month, int n_stays);

main()
{
    int discount;
    string month;
    int n_stays;
    cout << "Enter the month:";
    cin >> month;
    cout << "Enter the number of stays:";
    cin >> n_stays;

    float studio_price = Studio(month, n_stays);
    float appartment_price = Appartment(month, n_stays);
    cout << "Appartment:" << appartment_price << "$" << endl;
    cout << "Studio:" << studio_price << "$";
}

float Studio(string month, int n_stays)
{
    float studio_p_m_o = 50;
    float studio_p_j_s = 75.20;
    float studio_p_j_a = 76;
    float studio_price;

    if (month == "May" || month == "October")
    {
        if (n_stays > 7 && n_stays < 14)
        {
            studio_p_m_o = studio_p_m_o * n_stays;
            studio_price = studio_p_m_o - ((5 * studio_p_m_o) / 100);
        }
        else if (n_stays > 14)
        {
            studio_p_m_o = studio_p_m_o * n_stays;
            studio_price = studio_p_m_o - ((30 * studio_p_m_o) / 100);
        }
        else
        {
            studio_p_m_o = studio_p_m_o * n_stays;
            studio_price = studio_p_m_o;
        }
    }
    else if (month == "June" || month == "September")
    {

        if (n_stays > 14)
        {
            studio_p_j_s = studio_p_j_s * n_stays;
            studio_price = studio_p_j_s - ((5 * studio_p_j_s) / 100);
        }
        else
        {

            studio_p_j_s = studio_p_j_s * n_stays;
            studio_price = studio_p_j_s;
        }
    }
    else if (month == "July" || month == "August")
    {
        studio_p_j_a = studio_p_j_a * n_stays;
        studio_price = studio_p_j_a;
    }
    return studio_price;
}

float Appartment(string month, int n_stays)
{

    float apartment_p_m_o = 65;
    float apartment_p_j_s = 68.70;
    float apartment_p_j_a = 77;
    float appartment_price;
    if (month == "May" || month == "October")
    {
        if (n_stays > 14)
        {
            apartment_p_m_o = 65 * n_stays;
            appartment_price = apartment_p_m_o - ((apartment_p_m_o * 10) / 100);
        }
        else
        {
            apartment_p_m_o = 65 * n_stays;
            appartment_price = apartment_p_m_o;
        }
    }
    if (month == "June" || month == "September")
    {
        if (n_stays > 14)
        {
            apartment_p_j_s = 68.70 * n_stays;
            appartment_price = apartment_p_j_s - ((apartment_p_j_s * 10) / 100);
        }
        else
        {
            apartment_p_j_s = 68.70 * n_stays;
            appartment_price = apartment_p_j_s;
        }
    }
    if (month == "July" || month == "August")
    {
        if (n_stays > 14)
        {
            apartment_p_j_a = 77 * n_stays;
            appartment_price = apartment_p_j_a - ((apartment_p_j_a * 10) / 100);
        }
        else
        {
            apartment_p_j_a = 77 * n_stays;
            appartment_price = apartment_p_j_a;
        }
    }
    return appartment_price;
}