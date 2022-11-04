#include <iostream>
using namespace std;

int main(){
    
    int condition (1);

    switch (condition)
    {
        int x;
        case 0 :
        int y;
        x = 6;
        x ++;
        cout << "X : " << x << endl;
        cout << "Statement1" <<endl;
        cout << "Sattement2" <<endl;
        break;

        case 1 :
        int z;
        y = 5;
        cout << " Y : " << y <<endl;
        cout << "Statement1" <<endl;
        cout << "Sattement2" <<endl;
        break;

        default :
        int u;
        cout << "Statement1" <<endl;
        cout << "Sattement2" <<endl;
        break;
    }

    return 0;
}