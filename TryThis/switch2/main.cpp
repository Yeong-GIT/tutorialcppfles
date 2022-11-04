#include <iostream>
using namespace std;

int main(){
    constexpr double yen_to_dollar = 0.0072;
    constexpr double kroner_to_dollar = 0.098;
    constexpr double pound_to_dollar = 1.20;
    constexpr double yen_to_kroner = 0.072;

    int input = 0;
    char unit = ' ';

    cout << "Please enter a value followed by a unit (y,k,p): \n";
    cin >> input >> unit;

    switch(unit){
        case 'y':
        cout << input << " yen from yen to dollar == " << yen_to_dollar * input << " dollar.\n";
        break;

        case 'k':
        cout <<  input << " kroner from kroner to dollar == " << kroner_to_dollar * input << " dollar.\n";
        break;

        case 'p':
        cout << input << " pound from pound to dollar == " << pound_to_dollar * input << " dollar.\n";
        break;

        case 's':
        cout << input << " yen from yen to kroner == " << yen_to_kroner * input << " kroner.\n";
        break;
    }


    return 0;
}