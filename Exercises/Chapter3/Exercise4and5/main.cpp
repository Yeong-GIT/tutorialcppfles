#include <iostream>
using namespace std;

int main(){
    int val1, val2;
    cout << "Enter 2 integer values" << endl;
    cout << "First value : ";
    cin >> val1;
    cout << "Second value : ";
    cin >> val2;
    if (val1 > val2){
        cout << val1 << " is bigger than " << val2 <<endl;
    }else if(val1 < val2){
        cout << val1 << " is smaller than " << val2 <<endl;
    }else
        cout << val1 << " is equal than " << val2 <<endl;    

        int sum = 0; 
        sum = val1 + val2;
        cout << "Sum between " << val1 << " and "<< val2 << " is : " << sum <<endl;

        int diff = 0;
        diff = val1 - val2;
        cout << "Difference between " << val1 << " and "<< val2 << " is : " << diff <<endl;

        int product = 0;
        product = val1 * val2;
        cout << "Product between " << val1 << " and "<< val2 << " is : " << product <<endl;

        int ratio = 0;
        ratio = val1/val2;
        cout << "Ratio between " << val1 << " and "<< val2 << " is : " << ratio <<endl;

        
    double val3, val4;
    cout << "Enter 2 double values" << endl;
    cout << "Third value : ";
    cin >> val3;
    cout << "Fourth value : ";
    cin >> val4;
    if (val3 > val4){
        cout << val3 << " is bigger than " << val4 <<endl;
    }else if(val3 < val4){
        cout << val3 << " is smaller than " << val4 <<endl;
    }else
        cout << val3 << " is equal than " << val4 <<endl;    

        double sum1 = 0.00; 
        sum1 = val3 + val4;
        cout << "Sum between " << val3 << " and "<< val4 << " is : " << sum1 <<endl;

        double diff1 = 0.00;
        diff1 = val3 - val4;
        cout << "Difference between " << val3 << " and "<< val4 << " is : " << diff1 <<endl;

        double product1 = 0.00;
        product1 = val3 * val4;
        cout << "Product between " << val3 << " and "<< val4 << " is : " << product1 <<endl;

        double ratio1 = 0.00;
        ratio1 = val3/val4;
        cout << "Ratio between " << val3 << " and "<< val4 << " is : " << ratio1 <<endl;
    return 0;
}