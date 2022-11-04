#include <iostream>
using namespace std;

int main(){
    const int age {34};
    const float height {1.67f};

    cout << "age : " << age << endl;
    cout << "height : " << height << endl;
    //age = 35; cannot be modify because of const

    return 0;
}