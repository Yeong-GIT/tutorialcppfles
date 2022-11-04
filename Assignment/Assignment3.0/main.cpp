#include <iostream>
using namespace std;

int main(){
    double base_area = 0.0, length= 0.0, width = 0.0, height = 0.0, volume = 0.0;
    cout << " Welcome to box calculator. Please type in length, width and height information : \n";
    cout << "Length : ";
    cin >> length;
    cout << "\nWidth : ";
    cin >> width;
    cout << "\nHeight : ";
    cin >> height;

    base_area = width * length;
    cout << "The base area is : " << base_area;

    volume = base_area * height;
    cout << "\nThe volume is : "<< volume;



    return 0; 
}