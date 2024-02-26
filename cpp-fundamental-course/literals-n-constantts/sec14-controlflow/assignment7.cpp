#include <iostream>

using namespace std;

int maint()
{
    cout << "Enter a day " << endl;
    int day;
    string today;
    cin >> day;
    bool isContinue = true;
    switch (day)
    {
    case 1:
        today = "Monday";
        break;
    case 2:
        today = "Tuesday";
        break;
    case 3:
        today = "Wednesday";
        break;
    case 4:
        today = "Thursday";
        break;
    case 5:
        today = "Friday";
        break;
    case 6:
        today = "Saturday";
        break;
    case 7:
        today = "Sunday";
        break;
    default:
        isContinue = false;
        break;
    }

    if (isContinue == false)
        cout << day << " is not a valid day. Bye!" << endl;
    else
    {
        cout << "How many days have passed up to day" << endl;
        int n_day;
        cin >> n_day;

        cout << "Today is " << today << endl;

        if (n_day % 7 == 0)
        {
            cout << "If we went " << n_day << " days in the past we would hit a " << today << endl;
        }
        else
        {
            cout << "Today is " << today << endl;
            int m_multiple = n_day / 7 + 1;
            int passed_day = day + m_multiple - n_day;
            if (passed_day > 7)
                passed_day -= 7;
            switch (passed_day)
            {
            case 1:
                today = "Monday";
                break;
            case 2:
                today = "Tuesday";
                break;
            case 3:
                today = "Wednesday";
                break;
            case 4:
                today = "Thursday";
                break;
            case 5:
                today = "Friday";
                break;
            case 6:
                today = "Saturday";
                break;
            case 7:
                today = "Sunday";
                break;
            default:
                isContinue = false;
                break;
            }
            cout << "If we went " << n_day << " days in the past we would hit a " << today << endl;
        }
        }

    return 0;
}