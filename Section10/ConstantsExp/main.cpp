#include <iostream>
using namespace std;

int main(){

    constexpr int SOME_LIB_MAJOR_VERSION {123};
    constexpr int eye_count {2};
    constexpr double PI {3.14};

    //eye_count = 4;

    cout <<"eye count : " << eye_count << endl;
    cout << "PI : " << PI << endl;

    constexpr int leg_count {4}; //if int leg_count is not const, NON constexpr,leg_count is not known at compile time
    constexpr int arm_count{leg_count};

    cout << "leg count : " << leg_count << endl;

    const int table_count{5};
    constexpr int chair_count {table_count * 5};//expression must be done before the run time, in the constexpr itself works

    cout << "chair count : " << chair_count << endl;

    static_assert( SOME_LIB_MAJOR_VERSION == 123);

    cout << " App is doing its thing...." << endl;

    //int age = 5; //Error becuse not const/constexpr
    constexpr int age = 5;
    static_assert (age == 5); //only can insert const in static assert

    cout << "age : " << age << endl;
    return 0;
}