#include <iostream>
using namespace std;

int main(){
    string a ="";
    int b = 0;

    cout << "Enter a digit with alphabet : ";
    cin >> a;

    if(a == "zero"){
        cout << a << " is 0" <<endl;
    }else if(a == "one"){
        cout << a << " is 1" <<endl;
    }else if (a == "two"){
        cout << a << " is 2" <<endl;
    }else if (a == "three"){
        cout << a << " is 3" <<endl;
    }else if (a == "four"){
        cout << a << " is 4" <<endl;
    }else
        cout<< a << " is not a number i know."<<endl;

    cout << "Enter a digit number : ";
    cin >> b;

    if(b == 0){
        cout << b << " is zero"<<endl;
    }else if(b == 1){
        cout << b << " is one"<<endl;
    }else if(b == 2){
        cout << b << " is two"<<endl;
    }else if(b == 3){
        cout << b << " is three"<<endl;
    }else if(b == 4){
        cout << b << " is four"<<endl;
    }else
        cout << b << " is not a number i know."<<endl;
    return 0;
}