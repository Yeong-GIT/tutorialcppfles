#include <iostream>
using namespace std;

int main(){
    int number1 {550};
    int number2 {60};

    bool result = (number1 < number2);
    cout << boolalpha << "result : " << result <<endl;

    cout << endl;

    // cout << "free standing if statement" <<endl;
    // if(result == true){
    //     cout << number1 << " is less than " << number2 << endl;
    // } 

    // if(!(result == true)){
    //     cout << number1 << " is NOT less than " << number2 <<endl;
    // }



    // cout << "Using the else clause : " <<endl;
    // if (result == true){
    //     cout << number1 << " is less than " << number2 <<endl;
    // }else{
    //     cout << number1 << " is not less than " <<number2 <<endl;
    // }


    // cout << "Using expression condition : " <<endl;
    // if (number1 < number2){
    //     cout << number1 << " is less than " <<number2 <<endl;
    // }else{
    //     cout << number1 << " is NOT less than " <<number2 <<endl;
    //  }


    cout << "Nesting if statement" <<endl;

    bool red = {false};
    bool green {true};
    bool yellow{true};
    bool police_stop{false};

    // if(red){
    //     cout << "Stop " <<endl;
    // }else if(green){
    //     cout << "Go" <<endl;
    // }else if(yellow){
    //     cout << "Slow down" <<endl;
    // }else{
    //     cout << "Police" <<endl;
    // }

    // cout << endl;
    // cout << "Polce officer stops (verbose)" <<endl;
    // if(green){
    //     if(police_stop){
    //         cout << "Stop" <<endl;
    //     }else{
    //         cout << "Go" <<endl;
    //     }
    // }else if(yellow){
    //     if(police_stop){
    //         cout << "Slow down" <<endl;
    //     }else{
    //         cout << "Speed Up"<<endl;
    //     }
    // }else if(red){
    //     if(police_stop){
    //         cout << "Stop" <<endl;
    //     }else{
    //         cout <<" Stop the car" <<endl;
    //     }
    // }else{
    //     cout << "Stop all vehicle" <<endl;
    // }

    cout << "Police Officer stops (less verbose)" << endl;
    if(green && !police_stop){
        cout << "Go" <<endl;
    }else{
        cout << "Stop" <<endl;
    }



    return 0;
}