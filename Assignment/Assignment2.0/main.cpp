#include <iostream>
using namespace std;

int main(){
    double celcius_value = 0.0;
    double fahrenheit_value = 0.0;

    cout << "Please enter a value in degree celcius: ";
    cin >> celcius_value;
    fahrenheit_value = (celcius_value * 9.0/5.0) + 32.0; //Cels to fahr

    cout << "\nDegree value entered: " << celcius_value << " converted to fahrenheit value is : " << fahrenheit_value;

    return 0; 
}