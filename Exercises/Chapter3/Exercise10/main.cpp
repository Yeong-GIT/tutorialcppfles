#include <iostream>
using namespace std;

int main(){
    double a = 0.00;
    double b = 0.00;
    string operation = " ";
    cout << "Enter two value : " << endl;
    cout << "First Value : ";
    cin >> a;
    cout << "Second Value : ";
    cin >> b;
    cout << "Choose an operation from +, - , *, / ,plus, minus, mul, div : ";
    cin >> operation ;

    if (operation == "+" || operation == "plus"){
        double sum;
        sum = a + b;
        cout << "The operation of " << operation << " between " << a << " and "<< b << " is " << sum <<endl;
    }else if(operation == "-" || operation == "minus"){
        double deduct;
        deduct = a - b;
        cout << "The deduction of " << operation << " between " << a << " and "<< b << " is " << deduct <<endl;
    }else if (operation == "*" || operation == "mul"){
        double multiply;
        multiply = a * b;
        cout << "The operation of " << operation << " between " << a << " and "<< b << " is " << multiply <<endl;
    }else if (operation == "/" || operation == "div"){
        double division;
        division = a / b;
        cout << "The operation of " << operation << " between " << a << " and "<< b << " is " << division <<endl;
    }



    return 0;
}