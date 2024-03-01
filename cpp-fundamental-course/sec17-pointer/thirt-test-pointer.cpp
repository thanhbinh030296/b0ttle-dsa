#include <iostream>

using namespace std;

int main()
{
    // test heap
    int *p_number1 = nullptr;

    delete p_number1;
    cout << " hihi " << p_number1 << "  valuie = " << *p_number1 << endl;
    cout << " hihi " << endl;
    return 0;
}