#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a = 124;
    int b = 54;
    cout << "bit  a  " << bitset<8>(a) << endl;
    cout << "bit  b  " << bitset<8>(b) << endl;
    cout << "bit a|b " << bitset<8>(a | b) << endl;

    cout << "bit a&b " << bitset<8>(a & b) << endl;

    cout << "bit a^b " << bitset<8>(a ^ b) << endl;


    int c =12;
    cout << "C = " << c << " bit = " << bitset<8>(c) <<endl;
    cout << "Compound bitwise"<<endl;
    c <<=2;
     cout << "c =" <<dec<< c <<" bit  "<< bitset<8>(c) << endl;
    

    return 0;
}