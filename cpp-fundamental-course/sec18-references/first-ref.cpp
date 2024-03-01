#include <iostream>

using namespace std;

int main()
{
    int int_value = 123;
    int &ref = int_value;

    cout << "bottle love = " << ref << endl;
    cout << "bottle ref = " << &ref << endl;
    return 0;
}