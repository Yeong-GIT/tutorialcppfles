#include <iostream>

int main(){
    
    bool red_light {true};
    bool green_light {false};

    if(red_light == false){
        std::cout << "Stop!"  << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "the light is green!" <<std::endl;
    }else{
        std::cout << "the light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha; //special setting to show true and false
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;



    return 0;
}