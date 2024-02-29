#include <iostream>

using namespace std;

int main()
{
    const int some_data = 123;
    const int *const p_number = &some_data;

    cout << "p_number=" << p_number << "*p_number" << *p_number << endl;

    int score[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};

    int *p1 = score;

    cout << "p = " << p1[1] << endl;
    cout << " Size  = " << sizeof(p1) << endl;
    return 0;
}