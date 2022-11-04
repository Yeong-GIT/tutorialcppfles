#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main(){
    
    const int COLUMN_WIDTH {20};
    unsigned char value1 {0x3};// 000 0011
    unsigned char value2 {0x5};// 000 0101
    unsigned char value3 {0x3};// 000 0101
    unsigned char value4 {0x5};// 000 0101

    cout << setw(COLUMN_WIDTH) << "value1 : " <<
    setw(COLUMN_WIDTH)<< bitset<8>(value1) <<endl;

    cout << setw(COLUMN_WIDTH) << "value2 : " <<
    setw(COLUMN_WIDTH) << bitset<8>(value2) <<endl;

    

    //AND
    cout << endl;
    cout << "Bitwise AND :" <<endl;
    cout << setw(COLUMN_WIDTH) << "value1 & value2 : " 
    << setw(COLUMN_WIDTH) << bitset<8>(value1 & value2) << endl;
    cout << endl;

    //OR
    cout << endl;
    cout << "Bitwise OR :" <<endl;
    cout << setw(COLUMN_WIDTH) << "value1 & value2 : " 
    << setw(COLUMN_WIDTH) << bitset<8>(value1 | value2) << endl;
    cout << endl;

    //NEGATION
    cout << endl;
    cout << "Bitwise NOT :" <<endl;
    cout << setw(COLUMN_WIDTH) << "value3 : " <<
    setw(COLUMN_WIDTH) << bitset<8>(~value3) <<endl;

    cout << setw(COLUMN_WIDTH) << "value4 : " <<
    setw(COLUMN_WIDTH) << bitset<8>(~value4) <<endl;

    //XOR
    cout << endl;
    cout << "Bitwise XOR :" <<endl;
    cout << setw(COLUMN_WIDTH) << "value1 ^ value2 : " 
    << setw(COLUMN_WIDTH) << bitset<8>(value1 ^ value2) << endl;
    cout << endl;

    

    return 0;
}