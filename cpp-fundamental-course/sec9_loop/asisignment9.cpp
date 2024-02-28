#include <iostream>

using namespace std;

int main()
{
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "October", "September", "November", "December"};
    //
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, date;

    cout << "Enter a year : ";
    cin >> year;
    cout << "\nEnter the first day of the year:";
    cin >> date;

    if (year % 4 == 0)
        month_days[1] = 29;
    bool first_day_of_year = true;
    int row_count = 0;
    for (int month_idx = 0; month_idx < 12; month_idx++)
    {
        int day_count = 1;
        cout << endl;
        cout << "-- " << months[month_idx] << " " << year << " --" << endl;
        for (int i = 0; i < 7; i++)
            cout << "\t" << days[i];
        cout << endl;

        // for only first month
        if (first_day_of_year == true && month_idx == 0)
        {
            first_day_of_year = false;
            for (int i = 1; i <= 7; i++)
            {
                row_count++;
                if (i != date)
                    cout << "\t";
                else
                {
                    cout << "\t" << day_count;
                    break;
                }
            }

            day_count++;
        }
        while (day_count <= month_days[month_idx])
        {
            if (row_count == 7)
            {
                row_count = 0;
                cout << endl;
            }
            cout << "\t" << day_count++;
            row_count++;
        }

        cout << endl;
    }

    return 0;
}
