#include <iostream>
#include <string>

int addNumbers(int first_number, int second_number){
    int total;
    total = first_number + second_number;
    return total;
}

int subNumbers(int first_number, int second_number){
    int total;
    total = first_number - second_number;
    return total;
}

int multiplyNumbers(int first_number, int second_number){
    int total;
    total = first_number * second_number;
    return total;
}

int divisionNumbers(int first_number, int second_number){
    int total;
    total = first_number / second_number;
    return total;
}

int main(){
    int age1;
    std::string name;
    std::cout << "Please type your name and age"<<std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hi "<<name<<" your age is "<< age1 <<std::endl; 

    std::cout << "Continue for addition"<<std::endl;
    std::cout << "Please insert two number" <<std::endl;

    int num1, num2, sum;
    std::cin >> num1;
    std::cin >> num2;

    sum = addNumbers(num1, num2);
    std::cout << "The total of "<<num1 <<" and " <<num2<<" is "<<sum<<std::endl;

    std::cout << "Continue for subtraction"<<std::endl;
    std::cout << "Please insert two number" <<std::endl;

    int sub1, sub2, totalsubtract;
    std::cin >> sub1;
    std::cin >> sub2;

    totalsubtract = subNumbers(sub1,sub2);
    std::cout << "The subtraction of " << sub1 << " and "<< sub2<< " is "<< totalsubtract<< std::endl;

    std::cout << "Continue for multiplication"<<std::endl;
    std::cout << "Please insert two number" <<std::endl;

    int multiply1, multiply2, multiply;
    std::cin >> multiply1;
    std::cin >> multiply2;

    multiply = multiplyNumbers(multiply1,multiply2);
    std::cout << "The total of multiplication of " << multiply1 << " and "<< multiply2 <<" is "<<multiply <<std::endl;
    
    std::cout << "Continue for division"<<std::endl;
    std::cout << "Please insert two number" <<std::endl;

    int division1,division2, totaldivision;
    std::cin >> division1;
    std::cin >> division2;

    totaldivision = divisionNumbers(division1, division2);
    std::cout << "The total of division between "<< division1 << " and "<<division2<<" is "<<totaldivision <<std::endl;

    return 0;
}