#include <iostream>

using namespace std;

int main()
{
    char isContinue = 'y';
    int a, b, calculate, result, input_result;
    do
    {
        cout << "Welcome to the greatest calculator on Earth!" << endl;

        a = rand() % 199;
        b = rand() % 199;
       // cout << "a = " << a << " b = " << b << endl;
        calculate = rand() % 3;
        cout << "What's the result of ";
        if (b == 0)
        {
            calculate = rand() % 4;
            switch (calculate)
            {
            case 0:
                cout << a << "*" << b << " :";
                result = a * b;
                break;
            case 1:
                cout << a << "+" << b << " :";
                result = a + b;
                break;
            case 2:
                cout << a << "-" << b << " :";
                result = a - b;
                break;
            default:
                break;
            }
        }
        else
        {
            calculate = rand() % 4;
            switch (calculate)
            {
            case 0:
                cout << a << "*" << b << " :";
                result = a * b;
                break;
            case 1:
                cout << a << "+" << b << " :";
                result = a + b;
                break;
            case 2:
                cout << a << "-" << b << " :";
                result = a - b;
                break;
            case 3:
                cout << a << "/" << b << " :";
                result = a / b;
                break;
            }
        }
        cin >> input_result;
        if (input_result == result)
            cout << "Congratulations! You got the result " << result << " right" << endl;
        else
            cout << "Naah! the correct result is : " << result << endl;
        cout << "Do you want to try again ? (Y | N): ";
        cin >> isContinue;
    } while (isContinue == 'y');
    cout << "See you later!" << endl;
    return 0;
}