#include <iostream>
using namespace std;

int main(){
    int number1 = {45};
    int number2 = {60};

    cout << "Comparing Variables : "<<endl;

    cout << boolalpha;
    cout << (number1 < number2) <<endl;
    cout << (number1 <= number2) <<endl;
    cout << (number1 > number2) <<endl;
    cout << (number1 >= number2) <<endl;
    cout << (number1 == number2) <<endl;
    cout << (number1 != number2) <<endl;


    return 0;
}