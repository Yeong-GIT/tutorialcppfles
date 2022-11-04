#include <iostream>
using namespace std;

int main(){
    double dvalue = 0.00;
    double fvalue = 0.00;

    cout << "Please enter a degree value in Celsius : \n";
    cin >> dvalue ;
    fvalue = (9.0 / 5) * dvalue + 32;

    cout << " \n" << dvalue << " Celsius is " << fvalue << " Fahrenheit.\n";

    return 0;
}