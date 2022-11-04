#include <iostream>
#include <bitset>
using namespace std;

int main(){

    unsigned short int value {0xff0u};
    cout << "value : " << bitset<16>(value)
    << ", dec : " << value << endl;

    //shift right 1 bit position
    value = static_cast<unsigned short int>(value >> 1);
    cout << "value : " << bitset<16>(value)
    <<",dec : " << value << " [After shift 1 bit position right] "<< endl;

    //shift right 4 bit position
    value = static_cast<unsigned short int>(value >> 4);
    cout << "value : " << bitset<16>(value)
    <<",dec : " << value << " [After shift 4 bit position right] "<< endl;

    //shift left 1 bit position
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value)
    <<", dec : " << value << " [After shift 1 bit position left]" <<endl;

    //shift left 8 bit position
    value = static_cast<unsigned short int>(value << 8);
    cout << "value : " << bitset<16>(value)
    <<", dec : " << value << " [After shift 8 bit position left]" <<endl;

    //shift left 1 bit position
    value = static_cast<unsigned short int>(value << 1);
    cout << "value : " << bitset<16>(value)
    <<", dec : " << value << " [After shift 1 bit position left]" <<endl;

    //shift right 1 bit position
    value = static_cast<unsigned short int>(value >> 1);
    cout << "value : " << bitset<16>(value)
    <<",dec : " << value << " [After shift 1 bit position right] "<< endl;




    

    return 0;
}