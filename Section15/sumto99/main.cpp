#include <iostream>
using namespace std;

int main(){

    unsigned int sum{};
    cout << "Sum up to 99 starting from 0 : "<<endl;
    int n = 100;

    for (int i=0; i<=n; ++i){
        sum += i;
    }

    cout << "Sum of 0 to 99 is : " << sum <<endl;
    return 0;
}