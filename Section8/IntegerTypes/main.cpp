#include <iostream>

int main(){
    int elephant_count;
    int lion_count{};
    int dog_count {10};//Braced Initilization
    int dogs_count (20);//Functional initilization
    int cat_count {15};
    int cats_count (30);
    int domesticated_animals {dog_count + cat_count};
    int domesticate_animals (dogs_count + cats_count);

    //int decimal_number{2.9};//Braced Initilization cannot use decimal number, it will come out error

    // int decimal_number(2.9);//Functional Initialization can use decimal number, but it will eat out the decimal, and only output integer, but value stored is decimal

    float decimal_number(2.9); //Declare as float/double/long double to manage decimals

    std::cout << elephant_count <<std::endl;
    std::cout << lion_count <<std::endl;
    std::cout << dog_count <<std::endl;
    std::cout << dogs_count <<std::endl;
    std::cout << cat_count <<std::endl;
    std::cout << cats_count <<std::endl;
    std::cout << domesticated_animals <<std::endl;
    std::cout << domesticate_animals <<std::endl;
    std::cout << decimal_number <<std::endl;

    return 0;
}