#include <iostream>
using namespace std;

int main(){
    // for (unsigned int i{0};i<10;i++){
    //     cout << i << "  : I love C++ " << endl;
    // }

    // cout << "Loop done ! " <<endl;

    //Using size_t(only positive number allowed)
    // for (size_t i{0}; i<10; i++){
    //     cout << i << " : I love C++! "<<endl;
    // }

    // cout << "Loop done ! " <<endl;
    // cout << "sizeof(size_t) : " <<sizeof(size_t)<<endl;

    
    const size_t COUNT{20};

    for(size_t i{0}; i < COUNT ; ++i){
        cout << i << " : I love C++" <<endl;
    }

    return 0;
}