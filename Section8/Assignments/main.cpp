#include <iostream>
using namespace std;

int main(){
    
    int var1{123}; //Declare and Initialize
    cout << "var1 : " << var1 << endl;
    
    var1 = 55; // Assign new value
    cout << "var1 : " << var1 << endl;

    double var2{44.55}; //Declare and Initialize
    cout << "var2 : " << var2 << endl;

    var2 = 99.99; // Assign new value
    cout << "var2 : " << var2 << endl;

    cout << endl;
    bool state{false}; //Declare and Initialize
    cout << boolalpha; 
    cout << "state : " << state << endl;

    state = true; // Assign new value
    cout << "state : " << state <<endl;

    cout << endl;

    //Auto type deduction
    auto var3 {333u}; //Declare and Initialize
    cout << "var3 : " << var3 << endl;
    var3 = -22; // Assign new value (Garbage value because it cannot attain negative value)
    cout << "var3 : " << var3 << endl;

    return 0;
}