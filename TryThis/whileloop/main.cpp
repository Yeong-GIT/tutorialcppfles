#include <iostream>
using namespace std;

int main(){
    char a = 97;
    while(a<122){
        cout << a <<'\t' << a + 1 << '\n';
        ++a;
    }

    return 0;
}