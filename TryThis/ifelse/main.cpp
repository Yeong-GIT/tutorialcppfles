#include <iostream>
using namespace std;

int main(){
    
    int y = 0, k=0, p=0;
    cout << "Enter yen : ";
    cin >> y;
    cout << "\nEnter kroner : ";
    cin >> k;
    cout << "\nEnter pounds : ";
    cin >> p;
    if (y > 0){
        cout << "\nYen to dollar is : ";
        double sumY =  y * 0.0072;
        cout << sumY;
    }else
        cout << "\nInvalid yen.";

    if(k > 0){
        cout << "\nKroner to dollar is : ";
        double sumK = k * 0.10;
        cout << sumK;
    }else
        cout << "\nInvalid kroner.";

    if( p > 0){
        cout << "\nPounds to dollar is : ";
        double sumP = p * 1.20;
        cout << sumP; 
    }else
        cout << "\nInvalid pound.";
    return 0;
}