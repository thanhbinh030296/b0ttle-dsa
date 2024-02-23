#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int data =15;

    cout << "data (dec ) " << dec << data << endl;
    cout << "data (oct ) " << oct << data << endl;
    cout << "data (hex ) " << hex << data << endl;
    cout << "bit " << bitset<16>(data) << endl;

    int k = static_cast<int>(data << 2);
    // shift operator
    cout << "left bit " << k << endl;

    cout << "data (dec ) " << dec << (data << 2) << endl;
    cout << "data (oct ) " << oct << (data << 2) << endl;
    cout << "data (hex ) " << hex << (data << 2) << endl;
    cout << "bit " << bitset<16>((data << 2)) << endl;

    int h = static_cast<int>(data >> 2);
    // shift operator
    cout << "shift right bit " << h << endl;

    cout << "data (dec ) " << dec << h << endl;
    cout << "data (oct ) " << oct << h << endl;
    cout << "data (hex ) " << hex << h << endl;
    cout << "bit " << bitset<16>(h) << endl;

    return 0;
}