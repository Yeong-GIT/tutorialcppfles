#include <iostream>
using namespace std;

//Implicit conversion is inserted in by the compiler, without our involvement
//Implicit cast will add up the doubles
//int -> double // bigger memory


int main(){
    double price {45.6};
    int units {10};

    double total_price = price * units;
    cout << "Total price : " << total_price << endl;
    cout << " Sizeof total price " << sizeof(total_price) << endl;


    int x;
    double y {45.4};
    x = y;
    cout << "The value of x is : " << x << endl;
    cout << "Size of x : " << sizeof(x) << endl;


    return 0;
}