#include <iostream>

using namespace std;

constexpr bool condition {true};

int main()
{
    // tennary expresison

    int k = 1;
    int hihi = (k > 0) ? 12 : -100;

    cout << "\nTernary expression: " << hihi << endl;

    // const express

    if constexpr(condition)
    {
        cout << "const express TRUE" << endl;
    }
    else
        cout << "const expr FALSE" << endl;

    return 0;
}