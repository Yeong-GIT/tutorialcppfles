#include <iostream>
using namespace std;

int main(){

    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF}; //Transparency information

    unsigned int my_color {0xAABCDE00};
    
    cout << dec << showbase <<endl;

    cout << "Red is : " << ((my_color & red_mask) >> 24) <<endl;
    cout << "Green is : " << ((my_color & green_mask) >> 16) <<endl;
    cout << "Blue is : " << ((my_color & blue_mask) >> 8) <<endl;
    cout << "Alpha is : " << ((my_color & alpha_mask) >> 0) <<endl;


    return 0;
}