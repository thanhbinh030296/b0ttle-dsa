#include <iostream>

using namespace std;

int main()
{
    cout << "please enter an integral value" << endl;
    int value;
    cin >> value;
    if (value % 2 == 0)
        cout << value << " is even" << endl;
    else
        cout << value << " is odd" << endl;

    return 0;
}