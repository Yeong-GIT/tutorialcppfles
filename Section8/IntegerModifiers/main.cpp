#include <iostream>

int main(){
    signed int value1 {10};
    signed int value2 {-300};
    unsigned int value3 {399}; //unsigned only store positive number

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "value3 : " << value3 << std::endl;

    return 0;
}