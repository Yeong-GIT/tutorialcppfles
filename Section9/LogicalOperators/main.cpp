#include <iostream>
using namespace std;

int main(){

    bool a {false};
    bool b {false};
    bool c {true};
    
    int d{45};
    int e{20};
    int f{11};

    cout <<endl;
    cout << "Relational and logic operators on integers" <<endl;
    cout << "d : " <<d << endl;
    cout << "e : " <<e << endl;
    cout << "f : " <<f << endl;

    cout <<boolalpha;
    cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) <<endl; //true true = true
    cout << "(d == e) || (d <= f) : " << ((d == e) || (d <= f)) <<endl; // false false = false
    cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) <<endl;// false true = true
    cout << "(f > e) && (d > f) : " << ((f > e) && (d > f)) <<endl;//false true = false
    cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) <<endl;//true false = false
    cout << "(! a) && (d == e) : " << ((!a)&&(d==e))<<endl; //true false = false
    cout << "(! a) || (d > e) : " << ((!a) || (d>e)) <<endl; // false true = true

    return 0;
}