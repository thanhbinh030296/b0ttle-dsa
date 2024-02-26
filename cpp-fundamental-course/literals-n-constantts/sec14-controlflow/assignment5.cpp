#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a number of the old" << endl;
    int old;
    cin >> old;

    if (old < 21)
        cout << "Sorry, you are too young for the treatment" << endl;
    else if (old > 39)
        cout << "Sorry, you are too old for the treatment" << endl;
    else
        cout << "You are eligible for the treatment" << endl;

    return 0;
}