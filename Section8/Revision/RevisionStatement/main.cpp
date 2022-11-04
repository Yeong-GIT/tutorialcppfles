#include <iostream>

int addNumbers(int first_param, int second_param){
    int total;
    total = first_param + second_param;
    return total;
}

int subtractNumbers(int first_param, int second_param){
    int total;
    total = first_param - second_param;
    return total;
}

int multiplyNumbers(int first_param, int second_param){
    int total;
    total = first_param * second_param;
    return total;
}

int divisionNumber(int first_param, int second_param){
    int total;
    total = first_param / second_param;
    return total;
}

int main(){
    std::cout<<"Revision Statement"<<std::endl;
    std::cout<<"------Addition-------"<<std::endl;
    //Addition
    int add;
    add = 9 + 9;
    std::cout<<add<<std::endl;

    int firstNumber = 9;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;
    std::cout<<"Addition of "<<firstNumber<<" and "<<secondNumber<<" is "<<sum<<std::endl;//use seperated declaration for each number

    sum = addNumbers(9,9);
    std::cout<<"Addition of both numbers are "<<sum<<std::endl;//call using function, add number declared for the function directly

    std::cout<<"Addition of both numbers are "<<addNumbers(8,9)<<std::endl;//more straightforward version of add numbers
   

    //Subtraction
    std::cout<<"------Subtraction-------"<<std::endl;
    int subtract;
    subtract = 9 - 8;
    std::cout<<subtract<<std::endl;

    int subNumbers;
    int firstSubNumber = 20;
    int secondSubNumber = 10;
    subNumbers = firstSubNumber - secondSubNumber;
    std::cout<<"Subtraction of both numbers are "<<subNumbers<<std::endl;

    subtract = subtractNumbers(30,10);
    std::cout<<"Subtraction of both numbers are "<< subtract <<std::endl;

    std::cout<<"Subtraction of both numbers are "<< subtractNumbers(80,40) <<std::endl;


    //Multiplication
    std::cout<<"------Multiplication------"<<std::endl;
    int multiply;
    multiply = 9 * 9;
    std::cout<<multiply<<std::endl;
     

    int mltply;
    int first_number = 8;
    int second_number = 8;
    mltply = first_number * second_number;
    std::cout<<"Multiplication of both numbers are "<<mltply<<std::endl;

    int totalMultiply = multiplyNumbers(7,7);
    std::cout<<"Multiplication of both numbers are "<<totalMultiply<<std::endl;

    std::cout<<"Multiplication of both numbers are "<<multiplyNumbers(6,6)<<std::endl;



    //Division
     std::cout<<"------Division------"<<std::endl;
    int div;
    div = 81/9;
    std::cout<<div<<std::endl;

    int division;
    int first_divnumber = 81;
    int second_divnumber = 9;
    division = first_divnumber/second_divnumber;
    std::cout<<"Division of both number is "<<division<<std::endl;

    int divisionNum = divisionNumber(36,6);
    std::cout<<"Division of both number is "<<divisionNum<<std::endl;

    std::cout<<"Division of both number is "<<divisionNumber(49,7)<<std::endl;
    return 0;
}