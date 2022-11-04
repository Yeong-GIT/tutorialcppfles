#include <iostream>
using namespace std;

int main(){
    double miles = 0.000;
    cout << "Enter miles to be converted to kilometer : " <<endl;
    cin >> miles;
    double conv;
    conv = miles * 1.60934;
    cout << "Converted miles to kilometer is : " << conv << endl;

    return 0;
}