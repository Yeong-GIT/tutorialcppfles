#include <iostream>

using namespace std;

int main(){
    double length = 0.00;
    double width = 0.00;
    double height = 0.00;
    double base = 0.00;
    double volume = 0.00;

    cout << "Welcome to box calculator!" <<endl;
    cout << "Please type in length, width, and height information: \n";
    cin >> length >> width >> height;
    volume = length * width * height;
    base = volume * 1/3;

    cout << "The volume is " << volume << ", the base is " << base;

    return 0;
}