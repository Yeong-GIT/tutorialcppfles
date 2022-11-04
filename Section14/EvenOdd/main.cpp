#include <iostream>
using namespace std;

int main(){
    
    cout << "Please enter in an integral value : " << endl;
    int value, result;
    cin >> value;
    result = value % 2;

    if (result == 0){
        cout << value << " is even" <<endl;
    }else{
        cout << value << " is odd" <<endl;
    }

    return 0;
}