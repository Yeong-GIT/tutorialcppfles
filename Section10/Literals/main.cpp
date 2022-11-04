#include <iostream>
using namespace std;

int main(){
     unsigned int prize  {1'500'00'0u};
     signed long long int signed_long_long_int{1234ll};

    std::cout << "The prize is : " << prize << std::endl;

    std::cout << " signed_long_long_int : " << signed_long_long_int << std::endl;

    unsigned int hex_number{ 0x22BU}; // Dec 555
    int hex_number2 {0x400};// Dec 1024
    std::cout << std::hex <<  "The hex number is : " << hex_number << std::endl;
    std::cout << std::dec <<  "The hex number2 is : " << hex_number2 << std::endl;

    int black_color {0xffffff};
    std::cout << "Black color is : " << std::dec << black_color << std::endl;

    unsigned int binary_literal {0b11111111u};// 255 dec
    std::cout << "The binary literal is : " << binary_literal << std::endl;

    char char_literal {'c'};
    int number_literal {15};
    float fractional_literal {1.5f};
    std::string string_literal {"Hit the road"};

    std::cout << "The char literal is : " << char_literal << std::endl;
    std::cout << "The number literal is : " << number_literal << std::endl;
    std::cout << "The fractional literal is : " << fractional_literal << std::endl;
    std::cout << "The string literal is : " << string_literal << std::endl;

    return 0;
}