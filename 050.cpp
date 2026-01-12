//Write a function that returns the sum of two numbers.
#include <iostream>

int sumNumbers(int a, int b){
    return a+b;
    
}

int main () {
    int num1, num2;
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>> num1;
    std::cout<<"Enter second number: "<<std::endl;
    std::cin>>num2;

    int result = sumNumbers(num1, num2);
    std::cout<<"Result: "<<result <<std::endl;
    return 0;
}