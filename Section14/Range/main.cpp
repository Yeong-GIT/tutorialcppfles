#include <iostream>
using namespace std;

    int main(){
    cout << "Welcome to territory control. Please type in your x and y positions" <<endl;
    cout << "Type in your x location : " <<endl;
    int x = 0;
    cin >> x;

    cout << "Type in your y location : " <<endl;
    int y = 0;
    cin >> y;

    if((x < -20 || x > 20 )||(y < -10 || y > 10)){
        cout << "You're out of reach" <<endl;
    }else{
        cout << "You are completely surrounded. Don't move!" <<endl;
    }


    return 0;
}