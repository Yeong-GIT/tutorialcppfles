#include <iostream>

int addNumbers(int first_param, int second_param ){

    int result = first_param + second_param;
    return result;
}

int divideNumbers(int first_param, int second_param){
    int result = first_param / second_param;
    return result;
}

int multiplyNumbers(int first_param,int second_param){
    int result = first_param * second_param;
    return result;
}

int subtractNumbers(int first_param, int second_param){
    int result = first_param - second_param;
    return result;
}



int main(){
    
    int firstNumber {3}; //Statement
    int secondNumber {7}; //Statement

    std::cout<<"First Number: "<<firstNumber<<std::endl; //13
    std::cout<<"Second Number: "<<secondNumber<<std::endl; //7

    int sum = firstNumber + secondNumber;
    std::cout<<"Sum of two numbers: "<<sum<<std::endl; //20

    sum = addNumbers(25,7);
    std::cout<<"Sum of two numbers: "<<sum<<std::endl; //25 + 7

    int divide = secondNumber/firstNumber;
    std::cout<<"Division of "<< secondNumber <<" with "<<firstNumber<<" is : "<<divide<<std::endl;

    divide = divideNumbers(27,9);
    std::cout<<"Division of two numbers: "<<divide<<std::endl;// 27/9

    int multiply = firstNumber*secondNumber;
    std::cout<<"Multiplication of "<< firstNumber <<" with "<<secondNumber<<" is : "<<multiply<<std::endl;

    multiply = multiplyNumbers(81,9);
    std::cout<<"Multiplication of two numbers is : "<<multiply<<std::endl;

    int subtract = secondNumber - firstNumber;
    std::cout<<"Subtraction of "<< secondNumber <<" with "<<firstNumber<<" is : "<<subtract<<std::endl;

    subtract = subtractNumbers(81,9);
    std::cout<<"Subtraction of two numbers is : "<<subtract<<std::endl;


return 0;
}
