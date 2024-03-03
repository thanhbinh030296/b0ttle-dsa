#include <iostream>

int main()
{

    int age{22};

    int *age_ptr;
    int& age_ref {age};
    age_ptr = &age;
    std::cout << "age addr1 : " << age_ptr << std::endl;
    std::cout << "age addr2 : " << &age_ref << std::endl;

    return 0;
}