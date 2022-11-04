#include <iostream>
#include <string>
using namespace std;

const int Pen {10};
const int Marker {20};
const int Rectangle {30};

int main(){
    
    int tool { Rectangle };

    switch (tool) {
        case Pen: {
            cout << "Active tool is pen" <<endl;
        }
        break;

        case Rectangle:
        case Marker: {
            cout << "Active tool is marker" <<endl;
        }
        break;

        default:{
            cout << "Can't match any tool" <<endl;
        }

    }


    return 0;
}