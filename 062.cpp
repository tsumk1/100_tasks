//Write a function that returns the difference of two numbers
#include <iostream>

int diffOfNum(int a, int b){
    return a-b;
}
int main(){
    int num1, num2;
    std::cout<<"Enter first number: ";
    std::cin>> num1;
    std::cout<<"Enter second number: ";
    std::cin>> num2;

    int result = diffOfNum(num1, num2);
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"Result: "<<result<<std::endl;
    
    return 0;
}