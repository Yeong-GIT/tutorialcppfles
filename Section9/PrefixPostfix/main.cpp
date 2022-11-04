#include <iostream>
using namespace std;

int main(){

    int value{5};
    value = value + 1;
    cout << "The value is : "<< value << endl;
    
    value = 5; //Reset Value to 5

    value = value - 1;
    cout << "The value is : "<< value << endl; 

    value++;
    cout << "The value is : "<< value << endl;

    value--;
    cout << "The value is : "<< value << endl;

    return 0;
}