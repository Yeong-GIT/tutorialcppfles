#include <iostream>
using namespace std;

int main(){
    
    cout << "Please enter your age : " <<endl;
    int age, range;
    cin >> age;

    // if(age >= 21 && age <= 39){
    //     cout << "You are eligible for the treatment.";
    // }else{
    //     cout << "You are not eligible for the treatment.";
    // }

    if(age > 20){
        if(age < 40){
            cout << "You are elgible for the treatment." <<endl;
        }else{
            cout << "You are not elgible for the treatment" <<endl;
        }
    }else{
        cout << "You are not elgible for the treatment" <<endl;
    }

    return 0;

}