#include <iostream>
using namespace std;
string CalculateGrade(float, int, int, int, int, int);

main()
{
    string name;
    int m1, m2, m3, m4, m5;
    cout << "Enter Student name:";
    cin >> name;
    cout << "Enter marks1(Out of 100):";
    cin >> m1;
    cout << "Enter marks2(Out of 100):";
    cin >> m2;
    cout << "Enter marks3(Out of 100):";
    cin >> m3;
    cout << "Enter marks4(Out of 100):";
    cin >> m4;
    cout << "Enter marks5(Out of 100):";
    cin >> m5;

    int total_marks = m1 + m2 + m3 + m4 + m5;
    float percentage = (total_marks / 500) * 100;
    string grade = CalculateGrade(percentage, m1, m2, m3, m4, m5);
    cout << name << "achieved a total of " << total_marks << " marks out of 500 and his percentage is " << percentage << "and his grade is " << grade;
}

string CalculateGrade(float percentage, int m1, int m2, int m3, int m4, int m5)
{
    string grade;
    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        grade = "A";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        grade = "B";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        grade = "C";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
    return grade;
}