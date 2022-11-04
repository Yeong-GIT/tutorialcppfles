#include <iostream>
#include <bitset>
using namespace std;


    int main(){
    int data {29};
    cout << bitset<8>(data) << endl;
    cout << data <<endl;
    
    int data1 = (data >> 2);
    cout << bitset<8>(data1) <<endl;
    cout <<data1 <<endl;

    int data2 = (data << 4);
    cout << bitset<8>(data2) <<endl;
    cout << data2 <<endl;


    return 0;
}
