#include <iostream>
using namespace std;

int global_var1{23}; //Access everywhere in this file

void some_function(){
    int local_var{10};
    cout << "Inside function global_var : " <<global_var1 <<endl;
    cout << "Inside function some_function : " <<local_var <<endl;
}

int main(){
    cout << "Inside main function global_var : " <<global_var1 <<endl;

    return 0;
}