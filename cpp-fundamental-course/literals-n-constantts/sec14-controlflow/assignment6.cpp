#include <iostream>


using namespace std;

int main()
{
    cout << "Which day is today" << endl;
    int day;
    cin >> day;

    switch (day) 
    {
        case 1: cout << " Today is Monday" << endl;
        case 2: cout << " Today is Tuesday" << endl;
        case 3: cout << " Today is Wednesday" << endl;
        case 4: cout << " Today is Thursday" << endl;
        case 5: cout << " Today is Friday" << endl;
        case 6: cout << " Today is Saturday" << endl;
        case 7: cout << " Today is Sunday" << endl;
        default :  cout << day << " is not a valid day. Bye!" << endl; break;
    }


    return 0;

}