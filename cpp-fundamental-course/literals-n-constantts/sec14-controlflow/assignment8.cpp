#include <iostream>

using namespace std;

int main()
{
    int x_left = 10, x_right = -10;
    int y_top = 5, y_bot = -5;
    int x, y;

    cout << "Type in your x location " << endl;
    cin >> x;
    cout << "Type in your y location " << endl;
    cin >> y;
    if (x >= x_left && x <= x_right && y <= y_top && y >= y_bot)
        cout << "You are completely surroundded. Don't move" << endl;
    else
        cout << "You are out of reach!" << endl;

    return 0;
}