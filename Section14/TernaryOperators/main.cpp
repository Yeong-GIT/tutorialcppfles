#include <iostream>
using namespace std;

int main(){

    int max{};

    int a{35};
    int b{20};

    cout << endl;
    cout << "using regular if" <<endl;

    // if(a > b){
    //     max = a;
    // }else{
    //     max = b;
    // }


    max = (a > b)? a : b;
    
    cout << "max : " << max << endl;

    return 0;
}