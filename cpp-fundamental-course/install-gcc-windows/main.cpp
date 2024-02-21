#include <iostream>
// this is comment in a line
/*
    comment section
*/

using namespace std;

int main()
{
    std::cout << "value : " << std::endl;

    int age{21};

    // auto 
    auto k = 123;

    cout << "\nAge = " << age << " k = " << k << endl;
    cout << "changing for testing "<<endl;

    k = 521.123f;
    cout << "k = " << k<<endl;

    return 0;
}