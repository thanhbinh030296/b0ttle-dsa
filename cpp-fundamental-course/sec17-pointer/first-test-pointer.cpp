#include <iostream>

using namespace std;

int main()
{
    int *p_int{}, hihi = 12;
    p_int = &hihi;

    cout << "size of p number " << sizeof(p_int) << endl;
    cout << "p_int = " << p_int << endl;
    cout << "p_int value = " << *p_int << endl;

    double *p_double, double_var = 123.3f;

    p_double = &double_var;

    cout << " p double  & = " << &p_double << " value = " << *p_double << " size = " << sizeof(p_double) << endl;

    char *p_char;
    char char_var = 'c';
    p_char = &char_var;

    cout << " p_char  & = " << &p_char << " value = " << *p_char << " size = " << sizeof(p_char) << endl;

    char *p1_char{"hihihi"};

    cout << " p1_char  & = " << &p1_char << " value = " << *p1_char << " size = " << sizeof(p1_char) << endl;
    cout << "p1 + 1 " << *(p1_char + 1) << endl;
    return 0;
}