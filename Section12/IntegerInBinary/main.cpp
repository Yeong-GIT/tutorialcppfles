#include <iostream>
#include <bitset>
using namespace std;

int main(){
    
    unsigned short int data {0b11111110};
    cout << "data (dec) : "<< dec << data << endl;
    cout << "data (oct) : "<< oct << data << endl;
    cout << "data (hex) : "<< hex << showbase << data << endl;
    cout << "data (bin) : "<< bitset<16>(data) <<endl; 

    unsigned short int data1 {15};
    cout << "data1 (dec) : "<< dec << data1 << endl;
    cout << "data1 (oct) : "<< oct << data1 << endl;
    cout << "data1 (hex) : "<< hex << showbase << data1 << endl;
    cout << "data1 (bin) : "<< bitset<16>(data1) <<endl;

    return 0;
}