#include <iostream>
using namespace std;


int main(){

    //Explicit is telling the compiler which conversion u prefer, int or double
    //then turn result into int for assignment
    double x {12.5};
    double y {34.6};

    int sum = x + y;
    int sum1 = x + y; 
    int sum2 = x + y; 

    cout << "Without static_cast sum is : " << sum << endl; // 12.5 + 34.6 = 47


    //Explicit cast : cast them sum up
    // x turn into integer, y turn into integer , then add up
    //x = 12 , y = 34 // Which depends on the order of the conversion
    sum1 = static_cast<int>(x) + static_cast<int>(y);

    sum2 = static_cast<int> (x+y);
    
    cout << "Cast then sum1, result : " << sum1 << endl; // 12 + 34 = 46
    cout << "Cast then sum2, result : " << sum2 << endl; // 12.5 + 34.6 = 47.1 = 47

    //Older C style conversion/Old style C cast
    double PI {3.14};
    int int_pi = (int)(PI);//left bracket to choose what type conversion to transform to
                        //right bracket is the parameter to convert
    cout << "PI : " << PI << endl;
    cout << "int_pi : " << int_pi <<endl;



    return 0;
}